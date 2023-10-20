#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} node_l;

int main(void) {
  int i = 0;
  int array[5];
  int n = 3;

  array[i] = n;
  printf("%d\n", array[i]);


  node_l nd = { 9, NULL };
  printf("%d\n", nd.value);
}
