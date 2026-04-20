#include "albero.h"
#include <stdlib.h>

/* Creazione del nodo */
nodo *crea_nodo(int valore) {
    /* TODO: allocare un nuovo nodo */
    /* TODO: inizializzare il valore e i puntatori ai sottoalberi (NULL) */
    /* TODO: gestire fallimento di allocazione restituendo NULL */
    return NULL;
}

/* Visita preorder (radice, sinistro, destro) */
int somma_preorder(const nodo *radice) {
    /* TODO: implementare ricorsivamente */
    /* TODO: ordine: elabora radice, poi sottoalbero sinistro, poi destro */
    /* TODO: restituire 0 se radice == NULL */
    return 0;
}

/* Visita inorder (sinistro, radice, destro) */
int somma_inorder(const nodo *radice) {
    /* TODO: implementare ricorsivamente */
    /* TODO: ordine: sottoalbero sinistro, radice, sottoalbero destro */
    /* TODO: restituire 0 se radice == NULL */
    return 0;
}

/* Visita postorder (sinistro, destro, radice) */
int somma_postorder(const nodo *radice) {
    /* TODO: implementare ricorsivamente */
    /* TODO: ordine: sottoalbero sinistro, sottoalbero destro, radice */
    /* TODO: restituire 0 se radice == NULL */
    return 0;
}

/* Conteggio delle foglie */
int conta_foglie(const nodo *radice) {
    /* TODO: implementare ricorsivamente */
    /* TODO: una foglia è un nodo senza figli (sinistra == NULL && destra == NULL) */
    /* TODO: restituire 0 se radice == NULL */
    /* TODO: restituire 1 se è una foglia */
    /* TODO: altrimenti sommare le foglie del sottoalbero sinistro e destro */
    return 0;
}

/* Liberazione della memoria */
void libera_albero(nodo *radice) {
    /* TODO: liberare ricorsivamente tutti i nodi */
    /* TODO: gestire il caso radice == NULL */
}
