#ifndef __BIBAGENDA_H__
#define __BIBAGENDA_H__
#include<stdio.h>

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;

} Fecha;

typedef struct Contacto
{
    char nombre[100];
    char numero[15];
    char correo[50];
    Fecha fNacimineto;
} Contacto;

typedef struct ListaContactos
{
    Contacto *lista;
    size_t tamanio;

    void (*agregar)(struct ListaContactos **self, Contacto contacto);
    void (*eliminar)(struct ListaContactos **self);
    void (*imprime)(struct ListaContactos **self);
} ListaContactos;


void agregarContacto(ListaContactos **lista, Contacto contacto);
void eliminaContacto(ListaContactos **lista);
void imprimeLista(ListaContactos **lista);
ListaContactos *creaNuevaLista();
void eliminaEnters(char *cadena);


#endif