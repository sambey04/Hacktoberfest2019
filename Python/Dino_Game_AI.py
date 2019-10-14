# For more info and instructions:- https://github.com/mokshchaudhary/Dino

import numpy as np
import cv2
import time
import pyautogui as p

def pro_image(img):
    final_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) # grayscale
    final_image = cv2.Canny(final_image, threshold1=200, threshold2=300) # edge detection
    return final_image

def main():
    while(True):
        img = p.screenshot(region=(360,565,163,100)) # screenshots the area ahead of dino
        img = np.array(img) # converts the image to an array
        final_image = pro_image(img)# sends the image to the function for futher processing

        m = np.mean(final_image) #finds the mean to determine if obstacle

        print(m) # prints the mean

        if not m == float(0): # checks if the mean is zero
            p.press('up') # presses the 'up' key
            time.sleep(0.17) # waits for some time (adjust this for more snappy landing)
            p.press('down')# presses the 'down' key

main()
