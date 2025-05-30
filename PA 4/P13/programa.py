import cv2
import numpy as np
imagen = cv2.imread("papito.jpg")


h, w, c = imagen.shape

otra_imagen = np.zeros((h,w), np.uint8)

for f in range(h):
    for c in range(w):
        otra_imagen[f,c] = np.average(imagen[f,c])

#imagen = cv2.cvtColor(imagen, cv2.COLOR_BGR2RGB)
cv2.imshow("Papucho", imagen)
cv2.imshow("Otro Papucho", otra_imagen)
cv2.waitKey(0)