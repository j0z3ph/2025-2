/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

float *divide(float *a, float *b)
{
    float c;
    c = *a / *b;
    return &c;
}

int main()
{
    float *res;
    float var1 = 5.0f, var2 = 2.0f;

    res = divide(&var1, &var2);

    printf("%p - %f\n", res, *res);

    return 0;
}
