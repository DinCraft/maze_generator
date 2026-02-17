#include "../include/kruskal.h"
#include "stdlib.h"
#include <stdio.h>

int cmp(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

int* get_sorted_edges_indexes(
    struct graph *g, int edges_amount) {
  int bytes = sizeof(int) * edges_amount;
  int *edges = malloc(bytes);
  int index = 0;
  for (int r = 1; r < 6; r++) {
    for (int i = 0; i < edges_amount; i++) {
      if (g->edges[i] == r) {
        edges[index] = i;
        index++;
      }
    }
  }
  return edges;
}

int** allocate_matrix(int edges_amount) {
  int max_components = edges_amount / 2;
  int **matrix = malloc(sizeof(int*) * max_components);
  for (int i = 0; i < max_components; i++) {
    matrix[i] = malloc(sizeof(int) * edges_amount);
  }
  return matrix;
}

void algorithm_kruskal(struct graph *g) {
  int edges_amount = calculate_edges_amount(g);
  int* sorted_edges_indexes =
    get_sorted_edges_indexes(g, edges_amount);
  struct kruskal kruskal;
  kruskal.matrix = allocate_matrix(edges_amount);
}

void test() {
  int *arr;
  int n;
  qsort(arr, n, sizeof(int), cmp);
}
