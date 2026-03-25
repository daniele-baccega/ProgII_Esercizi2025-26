#ifndef ARRAY_OPS_H
#define ARRAY_OPS_H

#include <stddef.h>

/* Applica una funzione a tutti gli elementi di un array */
void applica_a_tutti(void *array, size_t elementi, size_t size_elemento, 
                     void (*operazione)(void*));

#endif /* ARRAY_OPS_H */
