/**
 * @file variadica.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion variadica :>
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdarg.h>

int suma(int n, ...) {
    va_list lista;
    va_start(lista, n);
    int la_suma = 0;
    for (size_t i = 0; i < n; i++)
    {
        la_suma += va_arg(lista, int);
    }
    va_end(lista);
    return la_suma;
}


int main()
{
    int sum = suma(5,1,2,-3,4,5);
    printf("%d\n", sum);
    
    return 0;
}
