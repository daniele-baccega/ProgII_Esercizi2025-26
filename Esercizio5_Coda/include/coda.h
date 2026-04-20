#ifndef CODA_H
#define CODA_H

typedef struct nodo_coda {
    int valore;
    struct nodo_coda *next;
} nodo_coda;

typedef struct {
    nodo_coda *front;   /* Inizio della coda (primo elemento a uscire) */
    nodo_coda *rear;    /* Fine della coda (ultimo elemento inserito) */
    int size;           /* Numero di elementi nella coda */
} coda;

/* Operazioni sulla coda */
coda *crea_coda(void);
int enqueue(coda *q, int valore);
int dequeue(coda *q, int *valore);
int e_vuota(const coda *q);
int get_size(const coda *q);
void stampa_coda(const coda *q);
void libera_coda(coda *q);

#endif /* CODA_H */
