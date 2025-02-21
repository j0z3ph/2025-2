/**
 * @file masnumeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas numeros
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#define PI 3.1416

int variableGlobal; // Esto NO se hace

int main()
{
    //const float PI = 3.1416;
    char nombre[10];
    PI = 5;

    scanf("%s", &nombre);

    printf("Hola %s, el valor de pi es %- 30.2f.\n", nombre, PI);
    
    return 0;
}
