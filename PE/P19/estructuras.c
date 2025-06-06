/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer estructura :>
 * @version 0.1
 * @date 2025-06-02
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include "tools.h"
#include "bibAgenda.h"

int main()
{
    char *menu[] = {"Agregar", "Listar", "Eliminar", "Salir"};
    int var = 0;
    Contacto tmp;

    ListaContactos *lista = creaNuevaLista();

    while (var != 3)
    {
        var = showMenu(4, menu, "Agenda de Contactos");

        switch (var)
        {
        case 0:
            // Agregar
            printf("Escriba el nombre: ");
            fgets(tmp.nombre, 100, stdin);
            eliminaEnters(tmp.nombre);
            printf("Escriba el correo: ");
            fgets(tmp.correo, 50, stdin);
            eliminaEnters(tmp.correo);
            printf("Escriba el numero: ");
            fgets(tmp.numero, 15, stdin);
            eliminaEnters(tmp.numero);
            printf("Escriba la fecha de nacimiento [dd/mm/aaaa]: ");
            scanf("%i/%i/%i", &tmp.fNacimineto.dia, &tmp.fNacimineto.mes, &tmp.fNacimineto.anio);

            lista->agregar(&lista, tmp);

            break;
        case 1:
            lista->imprime(&lista);
            break;
        case 2:
            lista->eliminar(&lista);
            break;
        default:
            break;
        }
        pausa();
    }

    return 0;
}
