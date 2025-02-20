/**
 * @file listas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-02-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include"edlib.h"

int main()
{
    Lista *lista = nuevaLista();

    lista->agregar(&lista, 1);
    lista->agregar(&lista, 2);
    lista->agregar(&lista, 3);
    lista->agregar(&lista, 3);

    lista->recorre(&lista);

    printf("Encontrado? %s %i\n",
           (lista->buscar(&lista, 1) >= 0 ? "SI" : "NO"),
           lista->buscar(&lista, 1));
    printf("Encontrado? %s %i\n",
        (lista->buscar(&lista, 3) >= 0 ? "SI" : "NO"),
        lista->buscar(&lista, 3));
    printf("Encontrado? %s %i\n",
           (lista->buscar(&lista, 5) >= 0 ? "SI" : "NO"),
           lista->buscar(&lista, 5));

    lista->eliminar(&lista);
    lista->recorre(&lista);
    lista->eliminar(&lista);
    lista->recorre(&lista);
    lista->eliminar(&lista);
    lista->recorre(&lista);
    lista->eliminar(&lista);
    lista->recorre(&lista);
    
    return 0;
}
