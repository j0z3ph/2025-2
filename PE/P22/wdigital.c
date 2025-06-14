/**
 * @file test.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include"simplecontroller.h"

int main()
{
    Board *esp32 = connectDevice("COM3", B115200);

    esp32->pinMode(esp32, 2, OUTPUT);

    while(true) {
        esp32->digitalWrite(esp32, 2, true);
        Sleep(1000);
        esp32->digitalWrite(esp32, 2, false);
        Sleep(1000);
    }

    esp32->closeDevice(esp32);
    
    return 0;
}
