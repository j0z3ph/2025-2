/**
 * @file traspuesta.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que obtiene la matriz
 * traspuesta de un matriz de 3x3
 * @version 0.1
 * @date 2025-04-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int traspuesta[3][3];

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            traspuesta[columna][fila] = matrix[fila][columna];
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", traspuesta[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
