import cv2
import numpy as np

imagen = cv2.imread("AMLove.jpg")
h,w,c = imagen.shape
kernel = np.array([[1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1],
                   [1,1,1,1,1,1,1,1,1,1,1]])/(11*11)

nueva_imagen = cv2.filter2D(imagen, -1, kernel)

cv2.imshow("Original", imagen)
cv2.imshow("Convulsionada", nueva_imagen)

cv2.waitKey(0)
