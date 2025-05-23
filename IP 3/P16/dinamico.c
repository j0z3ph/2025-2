/**
 * @file dinamico.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer solicitud de memoria dinamica :>
 * @version 0.1
 * @date 2025-05-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *puntero = NULL;
    float a = 0;

    int b = (float)a;
    puntero = (int *)malloc(10 * sizeof(int));
    *puntero = 10;
    puntero[1] = 11;
    *(puntero + 2) = 12;
    memset(puntero, 0, 10*sizeof(int));
    
    for (int i = 0; i < 10; i++)
    {
        printf("%p - %i\n", puntero+i, puntero[i]);
    }
    

    
    
    return 0;
}
