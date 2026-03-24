#ifndef NODO_H
#define NODO_H

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

/* Crear un nuevo nodo con un dato */
Nodo* nodo_crear(int dato);

/* Liberar memoria de un nodo */
void nodo_destruir(Nodo* nodo);

#endif
