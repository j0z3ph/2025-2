/**
 * @file punteros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    double variable = 10;
    double *puntero;

    puntero = &variable;

    printf("%p - %lf\n", &variable, variable);
    printf("%p - %p - %lf\n", puntero, &puntero, *puntero);
   
    puntero = puntero + 1000;
    printf("%p - %p - %lf\n", puntero, &puntero, *puntero);
   
    
    return 0;
}
