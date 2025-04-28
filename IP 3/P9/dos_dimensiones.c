/**
 * @file dos_dimensiones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer arreglo de dos dimensiones
 * @version 0.1
 * @date 2025-04-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int m[3][3];
    int cont = 1;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            m[fila][columna] = cont++;
        } 
    }

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%d ", m[fila][columna]);
        }
        printf("\n");
    }
    
    return 0;
}
