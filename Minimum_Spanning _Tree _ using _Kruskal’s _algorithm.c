#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



void kruskalMST(int **cost, int V) {
 int parent[100];

    // Initialize each vertex as its own parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int edges = 0;
    int minCost = 0;

    while (edges < V - 1) {
        int min = INT_MAX;
        int u = -1, v = -1;

        // Find the minimum edge in the upper triangular matrix
        for (int i = 0; i < V; i++) {
            for (int j = i + 1; j < V; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }


        // Find the roots of u and v
        int ru = u;
        while (parent[ru] != ru)
            ru = parent[ru];

        int rv = v;
        while (parent[rv] != rv)
            rv = parent[rv];

        // If they are in different sets, include the edge
        if (ru != rv) {
            parent[ru] = rv;
            printf("Edge %d:(%d, %d) cost:%d\n", edges, u, v, min);
            minCost += min;
            edges++;
        }

        // Mark this edge as processed
        cost[u][v] = cost[v][u] = INT_MAX;
    }

    printf("Minimum cost= %d\n", minCost);

	// Write your code here...
	
}


int main() {
    int V;
    printf("No of vertices: ");
    scanf("%d", &V);

    int **cost = (int **)malloc(V * sizeof(int *));
    for (int i = 0; i < V; i++)
        cost[i] = (int *)malloc(V * sizeof(int));

    printf("Adjacency matrix:\n");
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            scanf("%d", &cost[i][j]);

    kruskalMST(cost, V);

    for (int i = 0; i < V; i++)
        free(cost[i]);
    free(cost);

    return 0;
}
