import os
import shutil
import time
import tkinter as tk
from tkinter import filedialog
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

class ChangeHandler(FileSystemEventHandler):
    def __init__(self, src_folder, dest_folder):
        self.src_folder = src_folder
        self.dest_folder = dest_folder

    def on_modified(self, event):
        self.sync_folders()

    def on_created(self, event):
        self.sync_folders()

    def on_deleted(self, event):
        self.sync_folders()

    def sync_folders(self):
        # Copy everything from src_folder to dest_folder
        for root, dirs, files in os.walk(self.src_folder):
            for file in files:
                src_file = os.path.join(root, file)
                relative_path = os.path.relpath(src_file, self.src_folder)
                dest_file = os.path.join(self.dest_folder, relative_path)

                dest_dir = os.path.dirname(dest_file)
                if not os.path.exists(dest_dir):
                    os.makedirs(dest_dir)

                shutil.copy2(src_file, dest_file)

        # Remove deleted files from dest_folder
        for root, dirs, files in os.walk(self.dest_folder):
            for file in files:
                dest_file = os.path.join(root, file)
                relative_path = os.path.relpath(dest_file, self.dest_folder)
                src_file = os.path.join(self.src_folder, relative_path)

                if not os.path.exists(src_file):
                    os.remove(dest_file)

class App:
    def __init__(self, root):
        self.root = root
        self.root.title("Folder Sync Application")

        self.src_folder = ""
        self.dest_folder = ""
        self.observer = None

        self.create_widgets()

    def create_widgets(self):
        self.src_button = tk.Button(self.root, text="Select Source Folder", command=self.select_src_folder)
        self.src_button.pack(pady=5)

        self.src_label = tk.Label(self.root, text="Source Folder: None")
        self.src_label.pack(pady=5)

        self.dest_button = tk.Button(self.root, text="Select Backup Folder", command=self.select_dest_folder)
        self.dest_button.pack(pady=5)

        self.dest_label = tk.Label(self.root, text="Backup Folder: None")
        self.dest_label.pack(pady=5)

        self.start_button = tk.Button(self.root, text="Start Sync", command=self.start_sync)
        self.start_button.pack(pady=20)

    def select_src_folder(self):
        self.src_folder = filedialog.askdirectory()
        self.src_label.config(text=f"Source Folder: {self.src_folder}")

    def select_dest_folder(self):
        self.dest_folder = filedialog.askdirectory()
        self.dest_label.config(text=f"Backup Folder: {self.dest_folder}")

    def start_sync(self):
        if self.src_folder and self.dest_folder:
            event_handler = ChangeHandler(self.src_folder, self.dest_folder)
            self.observer = Observer()
            self.observer.schedule(event_handler, self.src_folder, recursive=True)
            self.observer.start()
            self.start_button.config(state=tk.DISABLED)
            self.root.protocol("WM_DELETE_WINDOW", self.on_closing)
        else:
            tk.messagebox.showwarning("Warning", "Please select both source and backup folders")

    def on_closing(self):
        if self.observer:
            self.observer.stop()
            self.observer.join()
        self.root.destroy()

if __name__ == "__main__":
    root = tk.Tk()
    app = App(root)
    root.mainloop()
