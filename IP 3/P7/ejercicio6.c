/**
 * @file ejercicio6.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejercicio 6
 * @version 0.1
 * @date 2025-03-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int numero;
    size_t factorial = 1;

    printf("Escribe un numero o te pico >:c ");
    scanf("%i", &numero);

    for (size_t i = numero; i > 0; i--)
    {
        factorial *= i;
    }
    
    printf("Ay ta tu factorial >:| %lu\n", factorial);
    
    return 0;
}
