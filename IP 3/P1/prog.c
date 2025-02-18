/**
 * @file prog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa :>
 * @version 0.1
 * @date 2025-02-17
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    // Todo lo que escribas despues es un comentario y no afecta
    // mi programa
    /*
    putc(getc(stdin), stdout);
    putc(getc(stdin), stdout);
    putc(getc(stdin), stdout);
    */

    // putchar(getchar());

    char cadenaUno[5];
    gets(cadenaUno);
    puts(cadenaUno);

    return 0;
}
