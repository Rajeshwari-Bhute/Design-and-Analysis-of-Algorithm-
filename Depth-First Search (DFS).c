#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Graph represented using adjacency list
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adjList[MAX_VERTICES];
int visited[MAX_VERTICES];

// Function to create a new adjacency list node
Node* createNode(int vertex) {
   Node* newNode = (Node*)malloc(sizeof(Node));
            while (temp != NULL) {
                if (current->vertex > temp->vertex) {
                    int t = current->vertex;
			current->vertex = temp->vertex;
                    temp->vertex = t;
                }
                temp = temp->next;
            }

            current = next;
        }
    }
}

// Depth-First Search (DFS) function
void DFS(int start) {
    visited[start] = 1;

    printf("%d ", start);

    Node* current = adjList[start];

    while (current != NULL) {
        int vertex = current->vertex;

        if (!visited[vertex]) {
            DFS(vertex);
        }

        current = current->next;
    }

    
    
    
}

int main() {
    int V, E;
    int u, v, start;

    // Read number of vertices and edges
    scanf("%d %d", &V, &E);

    // Initialize adjacency list
    for (int i = 0; i < V; i++) {
        adjList[i] = NULL;
        visited[i] = 0;
    }

    // Read the edges
    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    // Sort the adjacency list for each vertex
    sortAdjList(V);

    // Read the starting node
    scanf("%d", &start);

    // Perform DFS starting from the given node
    DFS(start);

    return 0;
}
