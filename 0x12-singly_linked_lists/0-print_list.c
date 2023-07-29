#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * prints_list - This function prints a list in a new line.
 * @list_h: is a const
 * @h: is a const
 *
 * Return: Count.
 */

size_t print_list(const list_t *h) {
  int count = 0;
  while (h != NULL) {
    if (h->str == NULL) {
      printf("[0] (nil)\n");
    } else {
      printf("[%lu] %s\n", h->len, h->str);
    }
    h = h->next;
    count++;
  }
  return count;
}
