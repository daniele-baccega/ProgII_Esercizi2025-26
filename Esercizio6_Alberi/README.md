# Esercizio 6 - Alberi Binari: Visite e Operazioni

## Obiettivo
Realizzare una libreria C che manipola alberi binari usando funzioni ricorsive. L'esercizio riguarda:
1. Creazione di nodi e struttura dell'albero
2. Tre tipi di visita: preorder, inorder e postorder per calcolare la somma
3. Conteggio delle foglie dell'albero

## Struttura del progetto
- `include/albero.h`: dichiarazioni della `struct nodo` e delle funzioni richieste.
- `src/albero.c`: implementazione delle funzioni dichiarate.
- `src/main.c`: programma principale con test case (TDD).
- `bin/`: destinazione dell'eseguibile compilato.
- `Makefile`: regole di compilazione e pulizia.

## Specifiche

### Struttura del nodo
```c
typedef struct nodo {
    int valore;
    struct nodo *sinistra;
    struct nodo *destra;
} nodo;
```

### Funzioni richieste

#### Creazione del nodo
- `nodo *crea_nodo(int valore);`
	- Alloca memoria per un nuovo nodo.
	- Inizializza il valore del nodo.
	- Inizializza i puntatori ai figli a `NULL`.
	- Restituisce `NULL` se allocazione fallisce.

#### Visita e somma degli elementi

Le tre funzioni calcolano la **somma** di tutti i valori nei nodi, visitando l'albero in ordini diversi:

- `int somma_preorder(const nodo *radice);`
	- Restituisce 0 se `radice == NULL`

- `int somma_inorder(const nodo *radice);`
	- Restituisce 0 se `radice == NULL`

- `int somma_postorder(const nodo *radice);`
	- Restituisce 0 se `radice == NULL`


#### Conteggio delle foglie
- `int conta_foglie(const nodo *radice);`
	- Restituisce il numero di foglie dell'albero.
	- Restituisce 0 se `radice == NULL`.
	- Implementazione ricorsiva.

#### Liberazione della memoria
- `void libera_albero(nodo *radice);`
	- Libera ricorsivamente tutti i nodi dell'albero.
	- Gestisce il caso `radice == NULL`.

## Esempi di utilizzo

### Creazione di un albero
```
        5
       / \
      3   7
     / \
    2   4
```

```c
nodo *radice = crea_nodo(5);
radice->sinistra = crea_nodo(3);
radice->destra = crea_nodo(7);
radice->sinistra->sinistra = crea_nodo(2);
radice->sinistra->destra = crea_nodo(4);
```

### Calcolo della somma
```c
int s = somma_preorder(radice);  // 5 + 3 + 2 + 4 + 7 = 21
/* Anche somma_inorder e somma_postorder restituiranno 21 */
```

### Conteggio delle foglie
```c
int foglie = conta_foglie(radice);  // 2 (nodi 2 e 7)
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
- Non modificare le firme in `albero.h`.
- Usare solo C standard (C11).
- Tutte le funzioni di visita devono essere implementate ricorsivamente.
