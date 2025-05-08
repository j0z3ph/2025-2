/**
 * @file variadica.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion variadica
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include <stdarg.h>

int suma(int n, ...);

int main()
{
    printf("%d\n", suma(6,5,3,6,2,1,-10));
    
    return 0;
}


int suma(int n, ...){
    va_list args;
    int suma = 0;
    va_start(args, n);
    for (size_t i = 0; i < n; i++)
    {
        suma += va_arg(args, int);
        //printf("%i ", va_arg(args, int));
    }
    va_end(args);
    return suma;
}
