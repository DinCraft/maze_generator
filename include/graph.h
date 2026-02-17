#ifndef GRAPH_H
#define GRAPH_H

#include "stdlib.h"

struct graph {
  int cols, rows;
  int *edges;
};

void create_graph(struct graph *g, int cols, int rows);

void make_random_edges(struct graph *g);

int calculate_edges_amount(struct graph *g);

#endif
