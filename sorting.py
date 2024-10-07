import os
import shutil
import tkinter as tk
from tkinter import filedialog, messagebox

# Function to get the file extension
def get_file_extension(filename):
    _, extension = os.path.splitext(filename)
    return extension

# Function to create a unique filename if a file with the same name exists
def create_unique_filename(directory, filename):
    base_name, extension = os.path.splitext(filename)
    new_filename = filename
    counter = 1

    while os.path.exists(os.path.join(directory, new_filename)):
        new_filename = f"{base_name}_{counter}{extension}"
        counter += 1

    return new_filename

# Function to sort files in the selected directory
def sort_files(directory):
    if not os.path.exists(directory) or not os.path.isdir(directory):
        messagebox.showerror("Error", "Invalid directory path")
        return

    for filename in os.listdir(directory):
        file_path = os.path.join(directory, filename)
        if os.path.isfile(file_path):
            extension = get_file_extension(filename)
            if not extension:
                continue  # Skip files without extension

            extension_dir = os.path.join(directory, extension[1:])  # Removing the dot from extension
            if not os.path.exists(extension_dir):
                os.makedirs(extension_dir)

            unique_filename = create_unique_filename(extension_dir, filename)
            shutil.move(file_path, os.path.join(extension_dir, unique_filename))

    # Remove empty folders
    for root_dir, dirs, _ in os.walk(directory, topdown=False):
        for dir in dirs:
            dir_path = os.path.join(root_dir, dir)
            if not os.listdir(dir_path):
                os.rmdir(dir_path)

    messagebox.showinfo("Success", "Files sorted and empty folders removed successfully!")

# Function to open the folder selection dialog
def select_folder():
    folder_selected = filedialog.askdirectory()
    if folder_selected:
        folder_path.set(folder_selected)

# Function to run the script
def run_script():
    directory = folder_path.get()
    if directory:
        sort_files(directory)
    else:
        messagebox.showwarning("No Folder Selected", "Please select a folder before running the script.")

# Main function to create the GUI
def main():
    global folder_path
    root = tk.Tk()
    root.title("File Sorter")

    # Create a StringVar to hold the folder path
    folder_path = tk.StringVar()

    # Create a label and entry to display the selected folder
    tk.Label(root, text="Selected Folder:").grid(row=0, column=0, padx=10, pady=10)
    tk.Entry(root, textvariable=folder_path, state='readonly', width=50).grid(row=0, column=1, padx=10, pady=10)

    # Create a button to open the folder selection dialog
    tk.Button(root, text="Select Folder", command=select_folder).grid(row=0, column=2, padx=10, pady=10)

    # Create a button to run the script
    tk.Button(root, text="Run Script", command=run_script).grid(row=1, column=1, padx=10, pady=10)

    root.mainloop()

if __name__ == "__main__":
    main()
