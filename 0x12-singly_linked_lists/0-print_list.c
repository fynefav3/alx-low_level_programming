#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *that prints a list
 *
 * Return: Count.
 */
size_t print_list(const list_t *h) {
  int count = 0;
  while (h != NULL) {
    if (h->str == NULL) {
      printf("[0] (nil)");
    } else {
      printf("[%lu] %s", h->len, h->str);
    }
    h = h->next;
    count++;
  }
  return count;
}
