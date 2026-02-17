#include "../include/edge.h"
#include "../include/graph.h"

void e_to_v(struct graph *g, int e, int **result) {
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
    (*result)[0] = y * w + x;
    (*result)[1] = y * w + x + 1;
  }
  else {
    y = e / (2 * w - 1);
    x = e % (2 * w - 1) - w + 1;
    (*result)[0] = y * w + x;
    (*result)[1] = (y + 1) * w + x;
  }
}

void v_to_e(struct graph *g, int e, int **result) {
  int w = g->cols;
  int h = g->rows;
  int x = e % w;
  int y = e / w;
  if (x == 0) {
    if (y == 0) {
      (*result)[0] = 0;
      (*result)[1] = w - 1;
    }
    else if (y == h - 1) {
      (*result)[0] = (2 * w - 1) * (h - 1);
      (*result)[1] = (*result)[0] - w;
    }
    else {
      (*result)[0] = (2 * w - 1) * y - w;
      (*result)[1] = (*result)[0] + 2 * w - 1;
      (*result)[2] = (*result)[0] + w;
    }
  }
  else if (x == w - 1) {
    if (y == 0) {
      (*result)[0] = w - 2;
      (*result)[1] = 2 * w - 2;
    }
    else if (y == h - 1) {
      (*result)[0] = (2 * w - 1) * (h - 1) + w - 2;
      (*result)[1] = (*result)[0] - w + 1;
    }
    else {
      (*result)[0] = (2 * w - 1) * y - 1;
      (*result)[1] = (*result)[0] + w - 1;
      (*result)[2] = (*result)[0] + 2 * w - 1;
    }
  }
  else if (y == 0) {
    (*result)[0] = x - 1;
    (*result)[1] = x;
    (*result)[2] = x + w - 1;
  }
  else if (y == h - 1) {
    (*result)[0] = (2 * w - 1) * (h - 1) + x - 1;
    (*result)[1] = (*result)[0] + 1;
    (*result)[2] = (*result)[1] - w;
  }
  else {
    (*result)[0] = (2 * w - 1) * y + x - 1;
    (*result)[1] = (*result)[0] + 1;
    (*result)[2] = (*result)[1] - w;
    (*result)[3] = (*result)[0] + w;
  }
}
