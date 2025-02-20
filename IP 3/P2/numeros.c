/**
 * @file numeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief La calculadora
 * @version 0.1
 * @date 2025-02-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int entero1;
    int entero2;
    puts("Usuario, ingresa un entero: ");
    scanf("%i", &entero1);
    puts("Usuario, ahora ingresa otro entero: ");
    scanf("%i", &entero2);

    printf("La suma es \"%i\"\n", entero1 + entero2);
    
    return 0;
}
