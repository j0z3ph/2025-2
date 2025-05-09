/**
 * @file funcion.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer funcion :>
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

// Declaraciones

int suma(int a, int b);


int main()
{
    int a = 5, b = 3;
    int resultado = suma(a, b);

    printf("%d\n", resultado);

    
    return 0;
}


// Definicion

int suma(int a, int b) {
    int res = a + b;
    return res;
}