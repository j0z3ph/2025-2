/**
 * @file chatGPT.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int dame_el_tamanio(char *cadena) {
    int i = 0;
    for (; cadena[i] != '\0'; i++);
    return i - 1;
}

int main()
{
    char cadena[100];

    printf("Usuario, escribe una cadena o te pico >:[ ");
    fgets(cadena, 100, stdin);

    for (int i = dame_el_tamanio(cadena)-1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    
    return 0;
}
