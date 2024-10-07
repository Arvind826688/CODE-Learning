import pytube
import os
import json
import requests
from tkinter import Tk, Label, Entry, Button, StringVar, filedialog, messagebox, ttk

# Path to the JSON file that keeps track of downloaded videos
TRACK_FILE = "downloaded_videos.json"

# Load downloaded video IDs from JSON file
def load_downloaded_videos():
    if os.path.exists(TRACK_FILE):
        with open(TRACK_FILE, 'r') as file:
            return json.load(file)
    return {}

# Save downloaded video IDs to JSON file
def save_downloaded_videos(downloaded_videos):
    with open(TRACK_FILE, 'w') as file:
        json.dump(downloaded_videos, file)

def download_video(stream, folder_path):
    try:
        stream.download(folder_path)
    except Exception as e:
        raise Exception(f"Failed to download {stream.title}: {e}")

def download_playlist():
    playlist_url = url_var.get()
    folder_path = folder_var.get()

    if not playlist_url:
        messagebox.showerror("Error", "Please enter a YouTube playlist URL")
        return

    if not folder_path:
        messagebox.showerror("Error", "Please enter or select a folder path")
        return

    downloaded_videos = load_downloaded_videos()
    try:
        playlist = pytube.Playlist(playlist_url)
        total_videos = len(playlist.video_urls)
        status_var.set(f"Found {total_videos} videos in the playlist.")
        app.update()

        for idx, video_url in enumerate(playlist.video_urls):
            try:
                yt = pytube.YouTube(video_url)
                if yt.video_id in downloaded_videos:
                    status_var.set(f"Skipping {yt.title} (already downloaded)")
                    app.update()
                    continue

                stream = yt.streams.get_highest_resolution()
                status_var.set(f"Downloading {yt.title}... ({idx + 1}/{total_videos})")
                update_progress_bar(idx + 1, total_videos)
                app.update()
                download_video(stream, folder_path)
                downloaded_videos[yt.video_id] = yt.title
                save_downloaded_videos(downloaded_videos)
            except pytube.exceptions.RegexMatchError:
                status_var.set(f"Invalid URL for video {video_url}")
            except requests.exceptions.RequestException:
                status_var.set(f"Network error while downloading {video_url}")
            except Exception as e:
                status_var.set(f"Error: {e}")
            finally:
                app.update()

        status_var.set("All videos downloaded successfully!")
    except pytube.exceptions.RegexMatchError:
        messagebox.showerror("Error", "Invalid YouTube playlist URL")
    except requests.exceptions.RequestException:
        messagebox.showerror("Error", "Network error. Please check your connection.")
    except Exception as e:
        messagebox.showerror("Error", f"An error occurred: {e}")
    finally:
        progress_bar.stop()

def update_progress_bar(current, total):
    progress_bar['value'] = (current / total) * 100

def browse_folder():
    folder_selected = filedialog.askdirectory()
    if folder_selected:
        folder_var.set(folder_selected)

app = Tk()
app.title("YouTube Playlist Downloader")
app.geometry("500x300")

url_var = StringVar()
folder_var = StringVar(value=os.getcwd())
status_var = StringVar()

Label(app, text="YouTube Playlist URL:").pack(pady=5)
Entry(app, textvariable=url_var, width=60).pack(pady=5)

Label(app, text="Download Folder:").pack(pady=5)
folder_frame = Entry(app, textvariable=folder_var, width=50)
folder_frame.pack(side='left', padx=5)
Button(app, text="Browse", command=browse_folder).pack(side='left', padx=5)

Button(app, text="Download Playlist", command=download_playlist).pack(pady=20)
progress_bar = ttk.Progressbar(app, orient='horizontal', length=400, mode='determinate')
progress_bar.pack(pady=10)
Label(app, textvariable=status_var).pack(pady=5)

app.mainloop()
