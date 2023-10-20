#ifndef LINKED
#define LINKED
#include <stddef. h>
#include <stdlib. h>
#include <string. h>
  DO
    struct list_s - singly linked list
   @str: string - (malloc'ed string)
   @len: length of the string
   @next: points to the next node
    Description: singly linked list node structure
 typedef struct list_s
 char *str;
unsigned int 1en;
 struct list_s *next;
 } list_t;
 size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
 list_t *add_node(list_t **head, const char *str);
 list_t *add_node_end(list_t **head, const char *str);
void free_list(1ist_t *head);
#endif /*LINKED*/
