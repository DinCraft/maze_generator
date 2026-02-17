#include "stdio.h"
#include "../include/graph.h"
#include "../include/vertex_edge.h"
#include "../include/kruskal.h"

int main(int argc, char *argv[])
{
  struct graph g;
  create_graph(&g, 4, 3);
  int edges_amount = calculate_edges_amount(&g);
  make_random_edges(&g);
  for (int i = 0; i < edges_amount; i++) {
    printf("%d ", g.edges[i]);
  }
  printf("\n");
  algorithm_kruskal(&g);

  //int *result = malloc(sizeof(int) * 4);
  
  /*for (int i = 0; i < 9; i++) {
    for (int r = 0; r < 4; r++) {
      result[r] = -1;
    }
    v_to_e(&g, i, &result);
    printf("%d - %d %d %d %d\n",
      i, result[0], result[1], result[2], result[3]);
  }*/

  /*for (int i = 0; i < 17; i++) {
    e_to_v(&g, i, &result);
    printf("%d - %d %d\n", i, result[0], result[1]);
  }*/
  return 0;
}
