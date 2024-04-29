#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size)
listint_t *swap_node(listint_t *node, listint_t **list)
void insertion_sort_list(listint_t **list)
void selection_sort(int *array, size_t size)
void swap(int *a, int *b)
int partition(int *array, int low, int high, size_t size)
void lomuto_quick_sort(int *array, int low, int high, size_t size)
void quick_sort(int *array, size_t size)

#end if