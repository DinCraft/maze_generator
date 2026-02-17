#include "../include/edge.h"
#include "../include/graph.h"

int* e_to_v(struct graph *g, int e) {
  int w = g->cols;
  int h = g->rows;
  int is_horizontal = 0;
  if ((e % (w + h)) < w - 1) {
    is_horizontal = 1;
  }
  int x, y;
  int *v = malloc(sizeof(int) * 2);
  if (is_horizontal) {
    y = e / (2 * w - 1);
    x = e % (2 * w - 1);
    v[0] = y * w + x;
    v[1] = y * w + x + 1;
  }
  else {
    y = e / (2 * w - 1);
    x = e % (2 * w - 1) - w + 1;
    v[0] = y * w + x;
    v[1] = (y + 1) * w + x;
  }
  return v;
}
