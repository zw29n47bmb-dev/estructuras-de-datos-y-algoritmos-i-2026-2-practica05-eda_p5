#ifndef PILA_H
#define PILA_H

#include "../lista/lista.h"

typedef Lista Pila;

Pila* pila_crear();

int pila_vacia(Pila* pila);

/* push: insertar por tail */
void pila_push(Pila* pila, int dato);

/* pop: eliminar por tail */
int pila_pop(Pila* pila);

/* top: regresar elemento superior (tail) */
int pila_top(Pila* pila);

void pila_destruir(Pila* pila);

#endif
