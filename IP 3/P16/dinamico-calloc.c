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
    puntero = (int *)calloc(10, sizeof(int));
    *puntero = 10;
    puntero[1] = 11;
    *(puntero + 2) = 12;
    
    //for (int i = 0; i < 10; i++)
    //{
        printf("%p - %i\n", puntero, *puntero);
    //}
    
    puntero = (int *)realloc(puntero, 20000*sizeof(int));

    printf("%p - %i\n", puntero, *puntero);
    
    return 0;
}
