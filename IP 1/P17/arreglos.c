/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"./Bibliotecas/bib.h"

int main()
{
    char *arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = (char *)malloc(5 * sizeof(char));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        free(arr[i]);
    }
    funcion();
    
    
    return 0;
}
