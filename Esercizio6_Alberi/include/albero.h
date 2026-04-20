#ifndef ALBERO_H
#define ALBERO_H

typedef struct nodo {
    int valore;
    struct nodo *sinistra;
    struct nodo *destra;
} nodo;

/* Creazione del nodo */
nodo *crea_nodo(int valore);

/* Funzioni di visita e calcolo della somma */
int somma_preorder(const nodo *radice);
int somma_inorder(const nodo *radice);
int somma_postorder(const nodo *radice);

/* Conteggio delle foglie */
int conta_foglie(const nodo *radice);

/* Liberazione della memoria */
void libera_albero(nodo *radice);

#endif /* ALBERO_H */
