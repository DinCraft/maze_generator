#include "../include/vertex.h"

void vertex_set_xy(
    int x, int y) {
  v->x = x;
  v->y = y;
}

void vertex_add_edge(
    enum vertex_side side) {
  v->edges |= (1 << side);
}

void vertex_remove_edge(
    enum vertex_side side) {
  v->edges &= ~(1 << side);
}
