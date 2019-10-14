from moviepy.editor import *
import sys
import os

FLIPPED_FOLDER_NAME = 'flipped'


def rotate_clip(name, new_file):
    """
    The function makes new clip which is a rotated version of the original one

    :param name: full name of the file that need to be flipped
    :param new_file: the new file name to save
    :return: None
    """
    clip = VideoFileClip(name).rotate(180)
    clip.write_videofile(new_file)


def main():
    """

     The script gets a folder of clips to flip and creates a new folder with the flipped files.
     The new folder name is flipped
    """
    if len(sys.argv) < 2:
        print("Usage: clip_flipper.py <folder to flip>")
        return

    os.makedirs(FLIPPED_FOLDER_NAME)  # create new folder for the flipped clips
    origin_folder = sys.argv[1]  # the name of folder with all the original clips
    files = os.listdir(origin_folder)  # list of all the files names in the origin folder
    for file_name in files:
        rotate_clip(os.path.join(origin_folder, f), os.path.join(FLIPPED_FOLDER_NAME, file_name))


if __name__ == '__main__':
    main()
