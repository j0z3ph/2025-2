import cv2
import numpy as np

amlo = cv2.imread("AMLove.jpg")
h, w, c = amlo.shape
#amlo2 = np.zeros((h,w,c), np.uint8)

brisho = 50

amlo2 = np.clip(amlo + [50], 0, 255).astype("uint8")

#for i in range(h):
#    for j in range(w):
#        amlo2[i,j] = np.clip(amlo[i,j] + [brisho], 0, 255)

cv2.imshow("Original", amlo)

cv2.imshow("Modificada", amlo2)
cv2.waitKey(0)
cv2.destroyAllWindows()