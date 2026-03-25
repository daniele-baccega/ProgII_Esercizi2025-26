# Esercizio Programmazione II: Gestione dinamica degli studenti con Lista

## Obiettivo
Realizzare una piccola libreria C che gestisce un elenco di studenti usando una **lista concatenata** (linked list), separando interfaccia e implementazione.

## Struttura del progetto
- `include/student.h`: dichiarazioni della `struct studente`, della `struct nodo`, della lista, e delle funzioni richieste.
- `src/student.c`: implementazione delle funzioni dichiarate.
- `src/main.c`: programma principale con test che verificano il comportamento.
- `bin/`: destinazione dell'eseguibile compilato.
- `Makefile`: regole di compilazione e pulizia.

## Specifiche
In `include/student.h` sono già definiti:
- `MAX_NOME_LEN` e `MAX_COGNOME_LEN` pari a 30.
- la `struct studente` con campi `nome`, `cognome`, `matricola`.
- la `struct nodo` con un puntatore a `studente` e un puntatore al prossimo nodo.
- la `struct studente_lista` con un puntatore al primo nodo (head) e il numero di studenti.

Implementare in `src/student.c` le seguenti funzioni:

**Funzioni base:**
- `studente *crea_studente(const char *nome, const char *cognome, int matricola);`
	- Alloca memoria e inizializza uno studente.
	- Copia nome e cognome (max 30 caratteri), imposta matricola.
	- Se parametri invalidi o allocazione fallisce, restituire `NULL`.
- `void stampa_studente(const studente *s);`
	- Stampa nome, cognome e matricola.
	- Gestire in modo sicuro il caso `s == NULL`.
- `void libera_studente(studente *s);`
	- Libera la memoria allocata. Gestire `s == NULL`.

**Funzioni per la gestione della lista di studenti:**
- `studente_lista *crea_lista(void);`
	- Alloca e inizializza una lista vuota (head == NULL, num_studenti == 0).
	- Restituire NULL in caso di fallimento allocazione.
- `int aggiungi_studente_lista(studente_lista *lista, const studente *s);`
	- Aggiunge uno studente alla lista creando un nuovo nodo.
	- Restituisce 1 se successo, 0 se parametri invalidi o allocazione fallisce.
	- Aggiornare `num_studenti`.
- `void stampa_lista_studenti(const studente_lista *lista);`
	- Stampa tutti gli studenti della lista con numerazione.
	- Gestire in modo sicuro il caso lista == NULL o lista vuota.
- `void ordina_lista_per_cognome(studente_lista *lista);` e `void ordina_lista_per_matricola(studente_lista *lista);`
	- Ordinano la lista per cognome (alfabetico) e matricola (numerico).
- `studente *ricerca_per_matricola(const studente_lista *lista, int matricola);`
	- Ricerca uno studente per matricola nella lista, restituisce il puntatore o `NULL`.
- `int rimuovi_studente(studente_lista *lista, int matricola);`
	- Rimuove uno studente dalla lista per matricola.
	- Libera la memoria del nodo rimosso e della struttura studente.
	- Restituisce 1 se trovato e rimosso, 0 altrimenti.
	- Aggiornare `num_studenti`.
- `void libera_lista(studente_lista *lista);`
	- Libera tutti i nodi e le strutture studente della lista.
	- Gestire `lista == NULL`.

In `src/main.c`:
- Scrivere test che verificano tutte le funzioni: creazione lista, aggiunta di studenti, ricerca, ordinamento, rimozione, stampa, liberazione corretta della memoria.

## Metodo di sviluppo - TDD (Test-Driven Development)
**IMPORTANTE:** Implementare sempre seguendo TDD:
1. Scrivere i test **prima** di implementare la funzione
2. Eseguire i test (falliranno)
3. Implementare la funzione
4. Eseguire i test finché non passano
5. Refactoring se necessario

Scrivere i test in `src/main.c` per ogni funzione.

## Vincoli
- Usare solo C standard (C11).
- Non modificare le firme in `student.h`.
- Usare una lista concatenata (`struct nodo`) e non un array.
