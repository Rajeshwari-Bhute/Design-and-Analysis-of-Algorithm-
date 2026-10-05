#include <stdio.h>
#include <stdlib.h>

#define INF 1000000000

typedef struct {
    int u;
    int v;
    int w;
} Edge;

int main() {
    int V, E;
    scanf("%d", &V);
    scanf("%d", &E);

    Edge *edges = (Edge *)malloc(E * sizeof(Edge));

    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    int src;
    scanf("%d", &src);

    int *dist = (int *)malloc((V + 1) * sizeof(int));
    int *parent = (int *)malloc((V + 1) * sizeof(int));

    /* Initialize distances and parents */
    for (int i = 1; i <= V; i++) {
        dist[i] = INF;
        parent[i] = -1;
    }

        for (int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                changed = 1;
            }
        }

        /* Optimization: stop if no distance changed */
        if (!changed)
            break;
    }

    /* Check for a negative weight cycle */
    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if (dist[u] != INF && dist[u] + w < dist[v]) {
            printf("Negative cycle detected\n");

            free(edges);
            free(dist);
            free(parent);

            return 0;
        }
    }
  for (int v = 1; v <= V; v++) {
        if (v == src)
            continue;

        if (dist[v] == INF) {
            printf("%d INF None\n", v);
        } else {
            /*
             * Store the path by following parent pointers
             * backwards from v to src.
             */
            int *path = (int *)malloc((V + 1) * sizeof(int));
            int count = 0;
            int current = v;

            while (current != -1) {
                path[count++] = current;

                if (current == src)
                    break;

                current = parent[current];
            }

            printf("%d %d ", v, dist[v]);

            /* Print path in source -> destination order */
            for (int i = count - 1; i >= 0; i--) {
                printf("%d", path[i]);

                if (i != 0)
                    printf("->");
            }

            printf("\n");

            free(path);
        }
    }

    free(edges);
    free(dist);
    free(parent);

    return 0;
}

