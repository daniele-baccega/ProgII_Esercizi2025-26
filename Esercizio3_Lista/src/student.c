#include "student.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

studente *crea_studente(const char *nome, const char *cognome, int matricola) {
    /* TODO: allocare memoria, copiare nome e cognome, impostare matricola. */
    /* TODO: gestire parametri NULL e fallimento di allocazione. */
    return NULL;
}

void stampa_studente(const studente *s) {
    /* TODO: stampare nome, cognome e matricola in modo sicuro. */
    /* TODO: gestire il caso s == NULL. */
}

void libera_studente(studente *s) {
    /* TODO: liberare la memoria allocata. */
    /* TODO: gestire il caso s == NULL. */
}

/* Gestione lista di studenti */
studente_lista *crea_lista(void) {
    /* TODO: allocare e inizializzare una lista vuota. */
    /* TODO: gestire fallimento di allocazione. */
    return NULL;
}

int aggiungi_studente_lista(studente_lista *lista, const studente *s) {
    /* TODO: aggiungere uno studente alla lista. */
    /* TODO: restituire 1 se successo, 0 se parametri invalidi o allocazione fallisce. */
    return 0;
}

void stampa_lista_studenti(const studente_lista *lista) {
    /* TODO: stampare tutti gli studenti della lista con numerazione. */
    /* TODO: gestire il caso lista == NULL o lista vuota. */
}

void ordina_lista_per_cognome(studente_lista *lista) {
    /* TODO: ordinare la lista per cognome (alfabetico). */
}

void ordina_lista_per_matricola(studente_lista *lista) {
    /* TODO: ordinare la lista per matricola (numerico). */
}

studente *ricerca_per_matricola(const studente_lista *lista, int matricola) {
    /* TODO: cercare uno studente per matricola nella lista. */
    /* TODO: restituire il puntatore allo studente o NULL se non trovato. */
    return NULL;
}

int rimuovi_studente(studente_lista *lista, int matricola) {
    /* TODO: cercare e rimuovere uno studente per matricola. */
    /* TODO: liberare la memoria del nodo rimosso. */
    /* TODO: restituire 1 se trovato e rimosso, 0 altrimenti. */
    return 0;
}

void libera_lista(studente_lista *lista) {
    /* TODO: liberare tutti i nodi e le strutture studente della lista. */
    /* TODO: gestire il caso lista == NULL. */
}
