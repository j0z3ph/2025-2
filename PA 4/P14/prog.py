import cv2

imagen = cv2.imread("images.jpeg")

complemento = 255 - imagen

cv2.imshow("Titulo", complemento)

cv2.waitKey()