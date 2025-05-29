import cv2

papucho = cv2.imread("Papucho.jpg")
img = cv2.cvtColor(papucho, cv2.COLOR_BGR2RGB)

print(papucho)

cv2.imshow("Papucho", img)

cv2.waitKey(0)