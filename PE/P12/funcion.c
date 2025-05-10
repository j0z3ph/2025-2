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
#include "biblioteca.h"
#include "biblioteca.h"


// Declaracion
int resta(int a, int b);


int main()
{
    int a = 5, b = 3;
    int resultado = suma(a, b);
    resultado = resta(a, b);

    printf("%d\n", resultado);

    printf("%d\n", multiplica(a,b));

    
    return 0;
}

// Definicion
int resta(int a, int b) {
    int res;
    res = a - b;
    return res;
}

