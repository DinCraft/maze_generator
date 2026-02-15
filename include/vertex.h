#ifndef VERTEX_H
#define VERTEX_H

enum vertex_side {
  LEFT, RIGHT, TOP, BOTTOM
};


void vertex_set_xy(int x, int y);

void vertex_add_edge(enum vertex_side side);

void vertex_remove_edge(enum vertex_side side);

#endif
