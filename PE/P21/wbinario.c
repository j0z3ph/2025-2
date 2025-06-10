/**
 * @file wbinario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int a = 8;
    double b = 2.1;

    FILE *archi = fopen("Valores.bin", "wb");

    fwrite(&a, sizeof(int), 1, archi);
    fwrite(&b, sizeof(double), 1, archi);

    fclose(archi);
    
    return 0;
}
