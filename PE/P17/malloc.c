/**
 * @file malloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Malloc
 * @version 0.1
 * @date 2025-05-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10*sizeof(int));

    *ptr = 10;
    ptr[1] = 11;
    *(ptr+2) = 12;

    for (int i = 0; i < 10; i++)
    {
        printf("%p - %i\n", ptr + i, *(ptr+i));
    }
    

    
    
    
    return 0;
}
