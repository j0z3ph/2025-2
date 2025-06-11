/**
 * @file rbinario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    FILE *archi = fopen("Numeros.bin", "rb");
    int a;
    double b;
    
    
    if(archi == NULL) {
        printf("error");
        return 1;
    }

    
    fseek(archi, sizeof(int), SEEK_SET);
    fread(&b, sizeof(double), 1, archi);

    fseek(archi, -1*(sizeof(double) + sizeof(int)), SEEK_CUR);
    fread(&a, sizeof(int), 1, archi);

    fclose(archi);

    printf("%i\n%lf\n", a, b);

    
    return 0;
}
