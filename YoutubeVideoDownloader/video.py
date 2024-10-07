import pytube
from tkinter import Tk, Label, Entry, Button, StringVar, filedialog, messagebox, ttk
import os

def download_video():
    url = url_var.get()
    folder_path = folder_var.get()
    
    if not url:
        messagebox.showerror("Error", "Please enter a YouTube URL")
        return
    
    if not folder_path:
        messagebox.showerror("Error", "Please enter or select a folder path")
        return

    try:
        yt = pytube.YouTube(url, on_progress_callback=progress_function)
        stream = yt.streams.get_highest_resolution()
        status_var.set("Downloading...")
        progress_bar.start()
        stream.download(folder_path)
        status_var.set("Download successful!")
    except pytube.exceptions.RegexMatchError:
        messagebox.showerror("Error", "Invalid YouTube URL")
    except Exception as e:
        messagebox.showerror("Error", f"An error occurred: {e}")
    finally:
        progress_bar.stop()

def browse_folder():
    folder_selected = filedialog.askdirectory()
    if folder_selected:
        folder_var.set(folder_selected)

def progress_function(stream, chunk, bytes_remaining):
    total_size = stream.filesize
    bytes_downloaded = total_size - bytes_remaining
    percentage = (bytes_downloaded / total_size) * 100
    progress_bar['value'] = percentage

app = Tk()
app.title("YouTube Video Downloader")
app.geometry("500x250")

url_var = StringVar()
folder_var = StringVar(value=os.getcwd())
status_var = StringVar()

Label(app, text="YouTube URL:").pack(pady=5)
Entry(app, textvariable=url_var, width=60).pack(pady=5)

Label(app, text="Download Folder:").pack(pady=5)
folder_frame = Entry(app, textvariable=folder_var, width=50)
folder_frame.pack(side='left', padx=5)
Button(app, text="Browse", command=browse_folder).pack(side='left', padx=5)

Button(app, text="Download", command=download_video).pack(pady=20)
progress_bar = ttk.Progressbar(app, orient='horizontal', length=400, mode='determinate')
progress_bar.pack(pady=10)
Label(app, textvariable=status_var).pack(pady=5)

app.mainloop()
