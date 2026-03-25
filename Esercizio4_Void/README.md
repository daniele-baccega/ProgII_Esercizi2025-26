# Esercizio 4 - Applicazione di una funzione a un array con puntatori a `void`

## Obiettivo
Realizzare una funzione `applica_a_tutti()` che applica una funzione generica a tutti gli elementi di un array di qualsiasi tipo.

## Funzione richiesta

```c
void applica_a_tutti(void *array, size_t elementi, size_t size_elemento, 
                     void (*operazione)(void*))
```

**Parametri:**
- `array`: puntatore a `void` all'array (può essere `int[]`, `double[]`, ecc.)
- `elementi`: numero di elementi dell'array
- `size_elemento`: dimensione in byte di ogni elemento (`sizeof(int)`, `sizeof(double)`, ecc.)
- `operazione`: funzione callback che prende un puntatore a un elemento

**Comportamento:**
- Scorrere l'array da inizio a fine
- Per ogni elemento, chiamare `operazione` passandogli un puntatore a quell'elemento
- Gestire il caso `array == NULL` o `operazione == NULL` in modo sicuro

## Esempi di utilizzo

```c
/* Callback per incrementare un int */
void incrementa(void *n) {
    (*(int*)n)++;
}

/* Uso */
int numeri[] = {1, 2, 3, 4, 5};
applica_a_tutti(numeri, 5, sizeof(int), incrementa);
/* Ora numeri = {2, 3, 4, 5, 6} */
```

```c
/* Callback per raddoppiare un double */
void raddoppia(void *n) {
    (*(double*)n) *= 2.0;
}

/* Uso */
double valori[] = {1.5, 2.5, 3.5};
applica_a_tutti(valori, 3, sizeof(double), raddoppia);
/* Ora valori = {3.0, 5.0, 7.0} */
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
- Non modificare la firma della funzione in `array_ops.h`
- Usare solo C standard (C11)
