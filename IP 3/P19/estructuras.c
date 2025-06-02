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
#include <stdlib.h>
#include <string.h>
#include "tools.h"

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;

typedef struct Contacto
{
    char nombre[100];
    char telefono[15];
    char correo[50];
    Fecha fNacimiento;
} Contacto;


typedef struct ListaContacto {
    Contacto *lista;
    size_t tamanio;
} ListaContacto;

typedef int entero;

void imprimeContacto(Contacto *contacto)
{
    printf("Nombre: %s\n", contacto->nombre);
    printf("Telefono: %s\n", contacto->telefono);
    printf("Correo Electronico: %s\n", contacto->correo);
    printf("Fecha de Nacimiento: %02i/%02i/%04i\n", contacto->fNacimiento.dia,
           contacto->fNacimiento.mes, contacto->fNacimiento.anio);
}

ListaContacto *crearNuevaLista() {
    ListaContacto *lista = NULL;

    lista = malloc(sizeof(ListaContacto));
    lista->lista = NULL;
    lista->tamanio = 0;
    return lista;
}


int main()
{
    char *menu[] = {"Agregar", "Listar", "Eliminar", "Salir"};

    int opcion = showMenu(4, menu, "Agenda de Contactos");
    
    ListaContacto *lista = crearNuevaLista();

    switch (opcion)
    {
    case 0:
        // Agregar
        break;
    case 1:
        // Listar
        break;
    case 2:
        // Eliminar
        break;
    case 3:
        // Salir
        break;
    
    default:
        break;
    }




    Contacto *contacto1;
    contacto1 = (Contacto *)malloc(sizeof(Contacto));

    contacto1->fNacimiento.dia = 2;
    contacto1->fNacimiento.mes = 6;
    contacto1->fNacimiento.anio = 2025;
    strcpy(contacto1->nombre, "Max Steel");
    strcpy(contacto1->correo, "iloveelementor@forever.alumno.ipn.mx");
    strcpy(contacto1->telefono, "+525511111111");

    imprimeContacto(contacto1);

    free(contacto1);


    


    return 0;
}
