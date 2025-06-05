import cv2
import numpy as np


kernelX = np.array([[1, 0, -1],
                   [2, 0, -2],
                   [1, 0, -1]])
kernelY = np.array([[1, 2, 1],
                   [0, 0, 0],
                   [-1, -2, -1]])


camara = cv2.VideoCapture(0)

if camara.isOpened():
    while cv2.waitKey(1) != 27:
        ret, imagen = camara.read()
        if ret:
            ix = cv2.filter2D(imagen, -1, kernelX)
            iy = cv2.filter2D(imagen, -1, kernelY)

            final = np.abs(ix + iy)

            cv2.imshow("En X", ix)
            cv2.imshow("En Y", iy)
            cv2.imshow("Final", final)

