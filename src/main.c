#include "stdio.h"
#include "../include/vertex.h"
#include "../include/graph.h"

int main(int argc, char *argv[])
{
  struct graph g;
  create_graph(&g, 4, 3);
  vertex_add_edge(&g.verticies[0], LEFT);
  vertex_add_edge(&g.verticies[0], TOP);
  printf("%d\n", g.verticies[0].edges);
  vertex_remove_edge(&g.verticies[0], LEFT);
  printf("%d\n", g.verticies[0].edges);
  return 0;
}
