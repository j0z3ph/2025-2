/**
 * @file ranalog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include"simplecontroller.h"

int main()
{
    Board *dev = connectDevice("COM3",B115200);
    dev->pinMode(dev, 15, INPUT);

    while(true){
        printf("%f\n", dev->analogRead(dev, 15));

    }
    
    dev->closeDevice(dev);
    return 0;
}
