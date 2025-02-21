/**
 * @file prog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Entradas y salidas con formato
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int numero1;
    int numero2;

    puts("Usuario, escribe un numero entero: ");
    scanf("%i", &numero1);
    
    puts("Usuario, ahora escribe otro numero entero: ");
    scanf("%i", &numero2);

    printf("La suma es \"%i\"\n", numero1 + numero2);
    
    return 0;
}
