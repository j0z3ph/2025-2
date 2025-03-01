/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Un programa de ejemplo
 * @version 0.1
 * @date 2025-02-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#define TABLA 7
int main()
{
    int numero = 1, resultado;

    while (numero <= 10)
    {
        resultado = TABLA * numero;
        printf("%i x %d = %i\n", TABLA, numero, resultado);    
        numero++;
    }
    
    return 0;
}
