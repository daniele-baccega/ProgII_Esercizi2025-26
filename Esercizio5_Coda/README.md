# Esercizio 5 - Coda (Queue) FIFO

## Obiettivo
Realizzare una libreria C che implementa una **coda (queue)** con struttura FIFO (First In First Out). Una coda è una struttura dati dove gli elementi vengono inseriti da un capo (rear) e estratti dall'altro capo (front).

## Struttura del progetto
- `include/coda.h`: dichiarazioni della `struct coda`, `struct nodo_coda` e delle funzioni richieste.
- `src/coda.c`: implementazione delle funzioni dichiarate.
- `src/main.c`: programma principale con test case (TDD).
- `bin/`: destinazione dell'eseguibile compilato.
- `Makefile`: regole di compilazione e pulizia.

## Specifiche

### Strutture dati
```c
typedef struct nodo_coda {
    int valore;
    struct nodo_coda *next;
} nodo_coda;

typedef struct {
    nodo_coda *front;   /* Inizio della coda (primo elemento a uscire) */
    nodo_coda *rear;    /* Fine della coda (ultimo elemento inserito) */
    int size;           /* Numero di elementi nella coda */
} coda;
```

### Funzioni richieste

- `coda *crea_coda(void);`
	- Alloca e inizializza una coda vuota.
	- `front` e `rear` sono inizializzati a `NULL`.
	- `size` è inizializzato a 0.
	- Restituisce `NULL` se allocazione fallisce.

- `int enqueue(coda *q, int valore);`
	- **Inserisce** un elemento alla fine della coda (rear).
	- Crea un nuovo nodo e lo aggiunge dopo l'ultimo elemento.
	- Se è il primo elemento, aggiorna sia `front` che `rear`.
	- Incrementa `size`.
	- Restituisce 1 se successo, 0 se fallimento (coda NULL o allocazione fallisce).

- `int dequeue(coda *q, int *valore);`
	- **Estrae** un elemento dall'inizio della coda (front).
	- Salva il valore del primo nodo in `*valore`.
	- Rimuove il primo nodo dalla coda.
	- Aggiorna `front` e `rear` se necessario.
	- Decrementa `size`.
	- Libera la memoria del nodo rimosso.
	- Restituisce 1 se successo, 0 se coda vuota o NULL.

- `int e_vuota(const coda *q);`
	- Restituisce 1 se la coda è vuota, 0 altrimenti.
	- Gestisce il caso `q == NULL` (considerare come vuota).

- `int get_size(const coda *q);`
	- Restituisce il numero di elementi nella coda.
	- Restituisce 0 se `q == NULL`.

- `void stampa_coda(const coda *q);`
	- Stampa tutti gli elementi della coda dal front al rear.
	- Gestisce in modo sicuro i casi `q == NULL` e coda vuota.

- `void libera_coda(coda *q);`
	- Libera tutti i nodi della coda.
	- Libera la struttura coda stessa.
	- Gestisce il caso `q == NULL`.

## Esempi di utilizzo

```c
/* Creazione di una coda */
coda *q = crea_coda();

/* Inserimento di elementi */
enqueue(q, 10);  /* Coda: [10] */
enqueue(q, 20);  /* Coda: [10, 20] */
enqueue(q, 30);  /* Coda: [10, 20, 30] */

/* Stampa */
stampa_coda(q);  /* Output: 10 20 30 */

/* Estrazione */
int val;
dequeue(q, &val);  /* val = 10, Coda: [20, 30] */
dequeue(q, &val);  /* val = 20, Coda: [30] */

/* Verifica */
printf("Size: %d\n", get_size(q));      /* Output: 1 */
printf("Vuota: %d\n", e_vuota(q));      /* Output: 0 */

/* Liberazione */
libera_coda(q);
```

## Metodo di sviluppo - TDD (Test-Driven Development)
**IMPORTANTE:** Implementare sempre seguendo TDD:
1. Scrivere i test **prima** di implementare la funzione
2. Eseguire i test (falliranno)
3. Implementare la funzione
4. Eseguire i test finché non passano
5. Refactoring se necessario

Scrivere i test in `src/main.c` per ogni funzione.

## Vincoli
- Non modificare le firme in `coda.h`.
- Usare solo C standard (C11).