
#include"bibAgenda.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"

ListaContactos *creaNuevaLista()
{
    ListaContactos *lista;
    lista = malloc(sizeof(ListaContactos));
    lista->lista = NULL;
    lista->tamanio = 0;

    lista->agregar = agregarContacto;
    lista->eliminar = eliminaContacto;
    lista->imprime = imprimeLista;
    return lista;
}

void imprimeContacto(Contacto *contacto)
{
    printf("Nombre: %s\n", contacto->nombre);
    printf("Fecha de Nacimiento: %02i-%02i-%04i\n", contacto->fNacimineto.dia,
           contacto->fNacimineto.mes, contacto->fNacimineto.anio);
    printf("Correo: %s\n", contacto->correo);
    printf("Telefono: %s\n", contacto->numero);
}

void agregarContacto(ListaContactos **lista, Contacto contacto)
{
    if ((*lista)->lista == NULL)
    {
        (*lista)->lista = malloc(sizeof(Contacto));
        strcpy((*lista)->lista->nombre, contacto.nombre);
        strcpy((*lista)->lista->correo, contacto.correo);
        strcpy((*lista)->lista->numero, contacto.numero);
        (*lista)->lista->fNacimineto = contacto.fNacimineto;
        (*lista)->tamanio = 1;
    }
    else
    {
        (*lista)->lista = realloc((*lista)->lista, ((*lista)->tamanio + 1) * sizeof(Contacto));
        strcpy((*lista)->lista[((*lista)->tamanio)].nombre, contacto.nombre);
        strcpy((*lista)->lista[((*lista)->tamanio)].correo, contacto.correo);
        strcpy((*lista)->lista[((*lista)->tamanio)].numero, contacto.numero);
        (*lista)->lista[((*lista)->tamanio)].fNacimineto = contacto.fNacimineto;
        (*lista)->tamanio++;
    }
}

void eliminaContacto(ListaContactos **lista)
{
    if ((*lista)->lista != NULL)
    {
        char *listaAux[(*lista)->tamanio];
        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            listaAux[i] = malloc(sizeof(char) * 120);
            sprintf(listaAux[i], "%s (%s)",
                    (*lista)->lista[i].nombre, (*lista)->lista[i].numero);
        }

        int contIndx = showMenu((*lista)->tamanio, listaAux, "Seleccione un contacto a eliminar");

        if ((*lista)->tamanio == 1)
        {
            free((*lista)->lista);
            (*lista)->lista = NULL;
            (*lista)->tamanio = 0;
        }
        else
        {
            memcpy((*lista)->lista + contIndx, (*lista)->lista + contIndx + 1, ((*lista)->tamanio - contIndx - 1) * sizeof(Contacto));
            (*lista)->lista = realloc((*lista)->lista, ((*lista)->tamanio - 1) * sizeof(Contacto));
            (*lista)->tamanio--;
        }

        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            free(listaAux[i]);
        }
    }
}

void imprimeLista(ListaContactos **lista)
{
    for (size_t i = 0; i < (*lista)->tamanio; i++)
    {
        imprimeContacto(&((*lista)->lista[i]));
        printf("-------------------------------\n");
    }
}

void eliminaEnters(char *cadena)
{
    cadena[strlen(cadena) - 1] = '\0';
}
