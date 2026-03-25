#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NOME_LEN 30
#define MAX_COGNOME_LEN 30

typedef struct studente {
    char nome[MAX_NOME_LEN + 1];
    char cognome[MAX_COGNOME_LEN + 1];
    int matricola;
} studente;

typedef struct nodo {
    studente *s;
    struct nodo *next;
} nodo;

typedef struct {
    nodo *head;
    unsigned int num_studenti;
} studente_lista;

/* Funzioni base */
studente *crea_studente(const char *nome, const char *cognome, int matricola);
void stampa_studente(const studente *s);
void libera_studente(studente *s);

/* Gestione lista di studenti */
studente_lista *crea_lista(void);
int aggiungi_studente_lista(studente_lista *lista, const studente *s);
void stampa_lista_studenti(const studente_lista *lista);
void ordina_lista_per_cognome(studente_lista *lista);
void ordina_lista_per_matricola(studente_lista *lista);
studente *ricerca_per_matricola(const studente_lista *lista, int matricola);
int rimuovi_studente(studente_lista *lista, int matricola);
void libera_lista(studente_lista *lista);

#endif /* STUDENT_H */
