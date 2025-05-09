/**
 * @file traspuesta.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer traspuesta :>
 * @version 0.1
 * @date 2025-05-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int traspuesta[3][3];

    for (size_t fila = 0; fila < 3; fila++)
    {
        for (size_t columna = 0; columna < 3; columna++)
        {
            traspuesta[columna][fila] = matrix[fila][columna];
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%i ", traspuesta[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
