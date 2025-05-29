import cv2
import numpy as np
img = cv2.imread("Papucho.jpg")

h,w,c = img.shape

nueva = np.zeros((h,w), np.uint8)


for fila in range(h):
    for columna in range(w):
        nueva[fila,columna] = np.average(img[fila,columna])

cv2.imshow("Original", img)
cv2.imshow("Nueva", nueva)

cv2.waitKey(0)