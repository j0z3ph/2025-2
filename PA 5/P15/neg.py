import cv2

img = cv2.imread("AMLove.jpg")

img2 = 255 - img

cv2.imshow("Imagen", img2)
cv2.waitKey()