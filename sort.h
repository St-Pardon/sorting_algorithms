#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define UNDEF -1
#define SWAP(array, a, b) \
	{                       \
		tmp = array[a];       \
		array[a] = array[b];  \
		array[b] = tmp;       \
	}


/**
 * struct listint_s - Represents a doubly linked list node.
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_items(int *array, size_t l, size_t r);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *l, listint_t *r);
void insertion_sort_list(listint_t **list);
void insertion_sort_list2(listint_t **list);

#endif
