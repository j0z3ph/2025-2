/**
 * @file alreves.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#define N 100


int tamanio_cadena(char *cadena) {
    int cont = 0;
    for ( ;cadena[cont] != '\0'; cont++);
    return cont-1;
}

int main()
{
    char cadena[N];
    printf("Usuario, ingrese una cadena: ");
    fgets(cadena, N, stdin);

    for (int i = tamanio_cadena(cadena) - 1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    
    return 0;
}
