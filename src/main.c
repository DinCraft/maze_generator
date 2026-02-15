#include "stdio.h"
#include "../include/vertex.h"
#include "../include/graph.h"

int main(int argc, char *argv[])
{
  struct graph g;
  create_graph(&g, 4, 3);
  return 0;
}
