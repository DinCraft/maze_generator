#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include "stdlib.h"

struct graph {
  int cols, rows;
  int *verticies;
};

void create_graph(struct graph *graph, int cols, int rows);

#endif
