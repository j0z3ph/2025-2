import cv2
import numpy as np


camara =cv2.VideoCapture(0)

if camara.isOpened():
    while cv2.waitKey(1) != 27:
        ret, imagen = camara.read()
        if ret:            
            imagen = cv2.cvtColor(imagen, cv2.COLOR_BGR2GRAY)
            #imagen = cv2.resize(imagen, (imagen.shape[1]*2, imagen.shape[0]*2))

            kernelX = np.array([[1,0,-1],
                            [2,0,-2],
                            [1,0,-1]])

            kernelY = np.array([[1,2,1],
                            [0,0,0],
                            [-1,-2,-1]])

            imgx = cv2.filter2D(imagen, -1, kernelX)
            imgy = cv2.filter2D(imagen, -1, kernelY)

            final = np.abs(imgx + imgy)


            cv2.imshow("Derivada en X", imgx)
            cv2.imshow("Derivada en Y", imgy)
            cv2.imshow("Suma", final)

