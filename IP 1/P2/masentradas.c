/**
 * @file masentradas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas entradas y salidas
 * @version 0.1
 * @date 2025-02-18
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int valor1=0;
    int valor2;

    char nombre[10];

    printf("Usuario, escribe tu nombre (excepto Picasso): ");
    scanf("%s", &nombre);

    printf("Holi %s\n", nombre);

    /*

    puts("Usuario, escribe un entero: ");
    scanf("%i", &valor1);

    puts("Usuario, ahora escribe otro entero: ");
    scanf("%i", &valor2);

    printf("La suma es: \"%i\"\n", valor1 + valor2);

    */
    return 0;
}
