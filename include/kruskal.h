#ifndef KRUSKAL_H
#define KRUSKAL_H

#include "graph.h"

struct kruskal {
  int **matrix;
};

int cmp(const void *a, const void *b);

int** allocate_matrix(int edges_amount);

void test();

void algorithm_kruskal(struct graph *g);

int* get_sorted_edges_indexes(
  struct graph *g, int edges_amount);

#endif
