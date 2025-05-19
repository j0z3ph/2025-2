/**
 * @file matrices.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("%i\n", *(*(m+2) + 1));
    printf("%i\n", m[2][1]);
    printf("%p - %i\n", m, *(*m+8));
    
    return 0;
}
