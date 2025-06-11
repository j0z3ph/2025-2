/**
 * @file escritura.c
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
    FILE *archi = fopen("Archivo.txt", "w");

    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    
    fputs("Holi\n", archi);
    fputs("Canoli\n", archi);


    fclose(archi);
    
    return 0;
}
