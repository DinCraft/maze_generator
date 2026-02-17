#include "../include/graph.h"
#include <math.h>

/**
  * each vertex has 4 values which define possible nodes
  */
void create_graph(struct graph *g, int cols, int rows) {
  g->cols = cols;
  g->rows = rows;
  g->edges = malloc(sizeof(int) * cols * rows);
  int i = 0;
  for (int x = 0; x < cols; x++) {
    for (int y = 0; y < rows; y++) {
      g->edges[i] = 0;
      i++;
    }
  }
}
