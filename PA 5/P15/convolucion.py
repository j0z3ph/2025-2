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

nueva_imagen = np.zeros((h,w,c), np.uint8)

mk = kernel.shape[0]//2

for i in range(mk, h-mk):
    for j in range(mk, w-mk):
        acumulador = 0
        for ik in range(kernel.shape[0]):
            for jk in range(kernel.shape[1]):
                acumulador += kernel[ik, jk] * (imagen[i-mk+ik, j-mk+jk]).astype("float64")
        
        nueva_imagen[i,j] = acumulador.astype("uint8")


cv2.imshow("Original", imagen)
cv2.imshow("Convulsionada", nueva_imagen)

cv2.waitKey(0)
