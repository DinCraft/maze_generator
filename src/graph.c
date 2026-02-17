#include "../include/graph.h"
#include <math.h>

/**
  * each vertex has 4 values which define possible nodes
  */
void create_graph(struct graph *g, int cols, int rows) {
  g->cols = cols;
  g->rows = rows;
  int edges_amount = calculate_edges_amount(g);
  g->edges = malloc(sizeof(int) * edges_amount);
  for (int i = 0; i < edges_amount; i++) {
      g->edges[i] = 0;
  }
}

int calculate_edges_amount(struct graph *g) {
  return (g->cols - 1) * g->rows + (g->rows - 1) * g->cols;
}

void make_random_edges(struct graph *g) {
  for (int i = 0; i < calculate_edges_amount(g); i++) {
      g->edges[i] = rand() % 5 + 1;
  }
}
