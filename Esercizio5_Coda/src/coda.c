#include "coda.h"
#include <stdlib.h>
#include <stdio.h>

/* Creazione di una coda vuota */
coda *crea_coda(void) {
    /* TODO: allocare memoria per la coda */
    /* TODO: inizializzare front e rear a NULL */
    /* TODO: inizializzare size a 0 */
    /* TODO: gestire fallimento di allocazione restituendo NULL */
    return NULL;
}

/* Inserimento di un elemento in coda (enqueue) */
int enqueue(coda *q, int valore) {
    /* TODO: verificare che q non sia NULL */
    /* TODO: creare un nuovo nodo con il valore */
    /* TODO: se è il primo elemento, aggiornare front */
    /* TODO: aggiungere il nodo alla fine della coda (rear) */
    /* TODO: aggiornare size */
    /* TODO: restituire 1 se successo, 0 se fallimento */
    return 0;
}

/* Estrazione di un elemento dalla coda (dequeue) */
int dequeue(coda *q, int *valore) {
    /* TODO: verificare che q non sia NULL e non sia vuota */
    /* TODO: salvare il valore del primo nodo in *valore */
    /* TODO: rimuovere il primo nodo */
    /* TODO: aggiornare front e rear se necessario */
    /* TODO: aggiornare size */
    /* TODO: liberare la memoria del nodo rimosso */
    /* TODO: restituire 1 se successo, 0 se la coda è vuota */
    return 0;
}

/* Verifica se la coda è vuota */
int e_vuota(const coda *q) {
    /* TODO: restituire 1 se la coda è vuota, 0 altrimenti */
    /* TODO: gestire il caso q == NULL */
    return 1;
}

/* Ottenere il numero di elementi nella coda */
int get_size(const coda *q) {
    /* TODO: restituire la dimensione della coda */
    /* TODO: restituire 0 se q == NULL */
    return 0;
}

/* Stampa degli elementi della coda */
void stampa_coda(const coda *q) {
    /* TODO: stampare tutti gli elementi della coda da front a rear */
    /* TODO: gestire il caso q == NULL */
    /* TODO: gestire il caso coda vuota */
}

/* Liberazione della memoria della coda */
void libera_coda(coda *q) {
    /* TODO: liberare tutti i nodi della coda */
    /* TODO: liberare la struttura coda stessa */
    /* TODO: gestire il caso q == NULL */
}
