/**
 * @file inversa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer inversa de 3x3
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{5,6,7},{8,9,10}, {11,12,14}};
    double factor, inversa[3][3];
    int traspuesta[3][3];
    int determinante = 0;
    int adjunta[3][3];
    
    // Determinante
    determinante =  (matrix[0][0]*matrix[1][1]*matrix[2][2])+
                    (matrix[0][1]*matrix[1][2]*matrix[2][0])+
                    (matrix[0][2]*matrix[1][0]*matrix[2][1])-
                    (matrix[0][2]*matrix[1][1]*matrix[2][0])-
                    (matrix[0][0]*matrix[1][2]*matrix[2][1])-
                    (matrix[0][1]*matrix[1][0]*matrix[2][2]);

    if(determinante == 0) {
        printf("La matriz no tiene inversa T~T\n");
        return 0;
    }


    factor = 1.0 / (double)determinante;


    // traspuesta
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            traspuesta[columna][fila] = matrix[fila][columna];
        }
    }

    // Adjunta

    adjunta[0][0] = +1*((traspuesta[1][1] * traspuesta[2][2]) - (traspuesta[1][2]*traspuesta[2][1]));
    adjunta[0][1] = -1*((traspuesta[1][0] * traspuesta[2][2]) - (traspuesta[1][2]*traspuesta[2][0]));
    adjunta[0][2] = +1*((traspuesta[1][0] * traspuesta[2][1]) - (traspuesta[1][1]*traspuesta[2][0]));
    adjunta[1][0] = -1*((traspuesta[0][1] * traspuesta[2][2]) - (traspuesta[2][1]*traspuesta[0][2]));
    adjunta[1][1] = +1*((traspuesta[0][0] * traspuesta[2][2]) - (traspuesta[2][0]*traspuesta[0][2]));
    adjunta[1][2] = -1*((traspuesta[0][0] * traspuesta[2][1]) - (traspuesta[2][0]*traspuesta[0][1]));
    adjunta[2][0] = +1*((traspuesta[0][1] * traspuesta[1][2]) - (traspuesta[0][2]*traspuesta[1][1]));
    adjunta[2][1] = -1*((traspuesta[0][0] * traspuesta[1][2]) - (traspuesta[1][0]*traspuesta[0][2]));
    adjunta[2][2] = +1*((traspuesta[0][0] * traspuesta[1][1]) - (traspuesta[1][0]*traspuesta[0][1]));
    
    // Inversa

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            inversa[i][j] = factor * (double)adjunta[i][j];
        }
    }


    // Imprimo
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%10.2lf ", inversa[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
