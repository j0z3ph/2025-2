/**
 * @file determinante.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula el determinante de
 * una matriz de 3x3
 * @version 0.1
 * @date 2025-04-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1,2,3},{4,4,6},{7,8,9}};
    
    int determinante = 0;

    determinante =  (matrix[0][0]*matrix[1][1]*matrix[2][2])+
                    (matrix[0][1]*matrix[1][2]*matrix[2][0])+
                    (matrix[0][2]*matrix[1][0]*matrix[2][1])-
                    (matrix[0][2]*matrix[1][1]*matrix[2][0])-
                    (matrix[0][0]*matrix[1][2]*matrix[2][1])-
                    (matrix[0][1]*matrix[1][0]*matrix[2][2]);

    printf("%d", determinante);


    return 0;
}
