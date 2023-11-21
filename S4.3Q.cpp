#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void floydWarshall(int graph[][4], int V) {
    int i, j, k;

    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                graph[i][j] = graph[i][j] > (graph[i][k] + graph[k][j]) ? (graph[i][k] + graph[k][j]) : graph[i][j];
            }
        }
    }
}

int main() {
    int graph[][4] = {{0, 8, 7, 8},
                      {9, 0, 11, 12},
                      {10, 9, 0, 11},
                      {8, 10, 11, 0}};

    int V = sizeof(graph) / sizeof(graph[0]);

    floydWarshall(graph, V);

    printf("Shortest paths:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}