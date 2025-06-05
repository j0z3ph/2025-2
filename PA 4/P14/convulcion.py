import cv2
import numpy as np

imagen = cv2.imread("images.jpeg")

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
                   [1,1,1,1,1,1,1,1,1,1,1]]) / (11*11)

h, w, c = imagen.shape
mk = kernel.shape[0] // 2

final = np.zeros((h,w,c), np.uint8)

for i in range(mk, h - mk):
    for j in range(mk, w - mk):
        acc = 0
        for ik in range(kernel.shape[0]):
            for jk in range(kernel.shape[0]):
                acc += kernel[ik, jk] * imagen[i-mk+ik, j-mk+jk].astype("float64")
        
        final[i,j] = acc
        
cv2.imshow("Original", imagen)
cv2.imshow("Convulcionada", final)

cv2.waitKey()
                