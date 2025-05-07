import simplecontroller as sc
import time 
esp32 = sc.Board("COM7")

#esp32.pinMode(2, sc.OUTPUT)
#esp32.pinMode(13, sc.INPUT)

esp32.attachServo(13)
angulo = 0

while True:
    #esp32.analogWrite(2, esp32.analogRead(13))
    #time.sleep(0.1)
    esp32.servoWrite(angulo)
    angulo += 10
    if angulo > 180:
        angulo = 0
    time.sleep(0.5)