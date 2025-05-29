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

int main()
{
    int (*arr)[5];
    int cont = 0;
    arr = malloc(25*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = ++cont;
        }
    }
    

    printf("%p - %p\n", arr, arr+1);
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%02i ", arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
    
    return 0;
}
