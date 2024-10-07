import tkinter as tk
from tkinter import filedialog
from tkinter import messagebox
import instaloader
import pandas as pd
import threading
import os
import json
import time

class InstagramScraperApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Instagram Scraper")
        
        self.folder_path = tk.StringVar()
        self.is_scraping = False
        self.data = []
        self.collected_ids = set()

        tk.Label(root, text="Folder Path:").grid(row=0, column=0, padx=10, pady=10)
        tk.Entry(root, textvariable=self.folder_path, width=50).grid(row=0, column=1, padx=10, pady=10)
        tk.Button(root, text="Browse", command=self.browse_folder).grid(row=0, column=2, padx=10, pady=10)
        
        tk.Button(root, text="Start", command=self.start_scraping).grid(row=1, column=0, columnspan=3, pady=10)
        tk.Button(root, text="Stop and Download", command=self.stop_scraping).grid(row=2, column=0, columnspan=3, pady=10)
    
    def browse_folder(self):
        folder_selected = filedialog.askdirectory()
        self.folder_path.set(folder_selected)
    
    def start_scraping(self):
        if not self.folder_path.get():
            messagebox.showwarning("Warning", "Please select a folder path.")
            return
        
        self.load_collected_ids()
        self.is_scraping = True
        self.data = []
        self.scraping_thread = threading.Thread(target=self.scrape_instagram, args=("default_username",))
        self.scraping_thread.start()
    
    def stop_scraping(self):
        self.is_scraping = False
        if self.scraping_thread.is_alive():
            self.scraping_thread.join()
        self.save_data()
    
    def load_collected_ids(self):
        log_path = os.path.join(self.folder_path.get(), "collected_ids.json")
        if os.path.exists(log_path):
            with open(log_path, 'r') as f:
                self.collected_ids = set(json.load(f))
        else:
            self.collected_ids = set()
    
    def save_collected_ids(self):
        log_path = os.path.join(self.folder_path.get(), "collected_ids.json")
        with open(log_path, 'w') as f:
            json.dump(list(self.collected_ids), f)
    
    def scrape_instagram(self, username):
        loader = instaloader.Instaloader()

        try:
            profile = instaloader.Profile.from_username(loader.context, username)
            self.scrape_profile_posts(profile)

            for follower in profile.get_followers():
                if not self.is_scraping:
                    break
                self.scrape_profile_posts(follower)

                for followers_follower in follower.get_followers():
                    if not self.is_scraping:
                        break
                    self.scrape_profile_posts(followers_follower)

        except Exception as e:
            messagebox.showerror("Error", f"An error occurred: {e}")
    
    def scrape_profile_posts(self, profile):
        for post in profile.get_posts():
            if not self.is_scraping:
                break
            if post.shortcode in self.collected_ids:
                continue

            post_data = {
                "post_id": post.shortcode,
                "likes": post.likes,
                "views": post.video_view_count if post.is_video else 0,
                "post_upload_timing": post.date,
                "post_upload_location": post.location.name if post.location else "",
                "hashtags": post.caption_hashtags,
                "post_caption": post.caption,
            }
            self.data.append(post_data)
            self.collected_ids.add(post.shortcode)

            # Adding a delay to respect rate limits
            time.sleep(1)
    
    def save_data(self):
        if not self.data:
            messagebox.showinfo("Info", "No new data to save.")
            return
        
        df = pd.DataFrame(self.data)
        save_path = os.path.join(self.folder_path.get(), "instagram_data.csv")
        
        if os.path.exists(save_path):
            df_existing = pd.read_csv(save_path)
            df = pd.concat([df_existing, df], ignore_index=True)
        
        df.to_csv(save_path, index=False)
        self.save_collected_ids()
        messagebox.showinfo("Info", f"Data saved to {save_path}")

if __name__ == "__main__":
    root = tk.Tk()
    app = InstagramScraperApp(root)
    root.mainloop()
