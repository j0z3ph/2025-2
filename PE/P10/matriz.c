/**
 * @file matriz.c
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
    int m[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", m[fila][columna]);
        }
        printf("\n");
    }
    
    
    return 0;
}
