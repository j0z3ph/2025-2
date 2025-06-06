/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Uniones
 * @version 0.1
 * @date 2025-06-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

struct Estructura
{
    int entero;
    float flotante;
    double doble;
    char caracter;
};

union Union
{
    int entero;
    float flotante;
    double doble;
    char caracter;
};



int main()
{
    struct Estructura estructura;
    estructura.caracter = 'A';
    estructura.doble = 3.1416;
    estructura.entero = 5;
    estructura.flotante = 0.1f;

    union Union _union;
    _union.caracter = 'A';
    printf("%c\n", _union.caracter);
    _union.doble = 3.1416;
    _union.entero = 5;
    _union.flotante = 0.1f;
    
    printf("%c\n", estructura.caracter);
    printf("%f\n", _union.flotante);

    printf("%zu - %zu\n", sizeof(estructura), sizeof(_union));
    

    return 0;
}
