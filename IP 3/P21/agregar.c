/**
 * @file agregar.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Agregar
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    FILE *archi = fopen("Archivo.txt", "a");
    if(archi == NULL) {
        printf("Error\n");
        return 1;
    }

    fputs("Holi Canoli\n", archi);

    fclose(archi);
    
    return 0;
}
