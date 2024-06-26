#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* swap_node - Swaps a node for its previous one
* @node: The node to swap
* @list: The pointer to the head
*
* Return: Pointer to the node which was swapped
*/
listint_t *swap_node(listint_t *node, listint_t **list)
{
listint_t *back = node->prev, *curr = node;

back->next = curr->next;
if (curr->next)
curr->next->prev = back;
curr->next = back;
curr->prev = back->prev;
back->prev = curr;
if (curr->prev)
curr->prev->next = curr;
else
*list = curr;
return (curr);
}

/**
* insertion_sort_list - Sorts a doubly linked list in ascending order
* 
* @list: Pointer to the head
*/
void insertion_sort_list(listint_t **list)
{
listint_t *node;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

node = (*list)->next;
while (node != NULL)
{
while (node->prev != NULL && node->prev->n > node->n)
{
node = swap_node(node, list);
print_list(*list);
}
node = node->next;
}
}
