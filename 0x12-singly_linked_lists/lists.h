#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

#endif /* LISTS_H */

