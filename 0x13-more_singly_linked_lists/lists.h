#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* 0-print_listint.c */
size_t print_listint(const listint_t *h);

/* 1-listint_len.c */
size_t listint_len(const listint_t *h);

/* 2 */
listint_t *add_nodeint(listint_t **head, const int n);

/* 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* 4 */
void free_listint(listint_t *head);

/* 5 */
void free_listint2(listint_t **head);

/* 6 */
int pop_listint(listint_t **head);

/* 7  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* 8 */
int sum_listint(listint_t *head);

/* 9 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
