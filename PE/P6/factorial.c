/**
 * @file factorial.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Calcula el factorial de un numero
 * @version 0.1
 * @date 2025-03-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    unsigned int numero;
    size_t factorial = 1;

    printf("Usuario, ingrese un numero entero: ");
    scanf("%u", &numero);

    for (size_t i = numero; i > 0; i--)
    {
        factorial *= i;
    }
    
    printf("El factorial de %u es %lu\n", numero, factorial);
    
    return 0;
}
