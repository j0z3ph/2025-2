/**
 * @file cadenas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int tamanio_cadena(char *cadena){
    int i = 0;
    for ( ;cadena[i] != '\0'; i++);
    return i;
}


int main()
{
    char cadena[100];

    printf("Usuario, ingrese un texto: ");
    fgets(cadena, 100, stdin);

    for (int i = tamanio_cadena(cadena)-1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    printf("\n");
    

    //printf("%i\n", tamanio_cadena(cadena));

    
    return 0;
}
