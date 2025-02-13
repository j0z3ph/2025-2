/**
 * @file abstracto.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-02-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;

typedef int entero;


int main()
{
    int arreglo[100];
    *arreglo = 1;
    *(arreglo + 1) = 100;
    *(arreglo + 1000) = 666;

    printf("%i %i %i\n", arreglo[0], arreglo[1], arreglo[1000]);

    
    
    return 0;
}
