import simplecontroller as sc
import time 


esp32 = sc.Board("COM7")

esp32.pinMode(13, sc.OUTPUT)
esp32.attachServo(13)

angulo = 0
while True:
    esp32.servoWrite(angulo)
    angulo += 10
    if(angulo > 180): angulo = 0
    time.sleep(1)
    
    
    #esp32.analogWrite(2, esp32.analogRead(13))
    
    #esp32.digitalWrite(2, True)
    #time.sleep(1)
    #esp32.digitalWrite(2, False)
    #time.sleep(1)
        