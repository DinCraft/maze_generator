#include "stdio.h"
#include "../include/graph.h"
#include "../include/vertex_edge.h"

int main(int argc, char *argv[])
{
  struct graph g;
  create_graph(&g, 3, 3);
  int *result = malloc(sizeof(int) * 4);
  for (int i = 0; i < 9; i++) {
    for (int r = 0; r < 4; r++) {
      result[r] = -1;
    }
    v_to_e(&g, i, &result);
    printf("%d - %d %d %d %d\n",
      i, result[0], result[1], result[2], result[3]);
  }
  /*for (int i = 0; i < 17; i++) {
    e_to_v(&g, i, &result);
    printf("%d - %d %d\n", i, result[0], result[1]);
  }*/
  return 0;
}
