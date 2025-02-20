#ifndef __EDLIB_H__
#define __EDLIB_H__

typedef struct Nodo
{
    int valor;
    struct Nodo *siguiente;
} Nodo;

typedef struct Lista
{
    Nodo *head;
    void (*agregar)(struct Lista **self, int valor);
    void (*recorre)(struct Lista **self);
    int (*buscar)(struct Lista **self, int valorABuscar);
    void (*eliminar)(struct Lista **self);
} Lista;

void agregar(Lista **lista, int valor);
void recorre(Lista **lista);
int buscar(Lista **lista, int valorABuscar);
void eliminar(Lista **lista);
Lista *nuevaLista();

#endif