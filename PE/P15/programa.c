/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-22
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include "ElMasGrandeBib.h"


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("El mas grande es %i\n", busca_al_mas_grande(arr));

    return 0;
}

