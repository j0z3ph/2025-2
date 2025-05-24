/**
 * @file puntero.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer punterp :>
 * @version 0.1
 * @date 2025-05-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    double entero = 10;
    double *puntero;
    puntero = &entero;

    printf("%p - %lf\n", &entero, entero);
    printf("%p - %p - %lf\n", &puntero, puntero, *puntero);
    
    puntero = puntero + 1;
    printf("%p - %p - %lf\n", &puntero, puntero, *puntero);

    return 0;
}
