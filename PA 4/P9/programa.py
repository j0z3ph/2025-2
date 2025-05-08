import serial
import time 

esp32 = serial.Serial('COM3',115200)

while True:
    esp32.write(b"on\n")
    time.sleep(1)
    esp32.write(b"off\n")
    time.sleep(1)
    