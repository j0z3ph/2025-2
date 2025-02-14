/**
 * @file prog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-02-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Estructura
{
    int entero;
    float flotante;
    double doble;
} Estructura;

typedef union Union
{
    int entero;
    float flotante;
    double doble;
} Union;

int main()
{
    printf("%lu\n", sizeof(Union));
    return 0;
}
