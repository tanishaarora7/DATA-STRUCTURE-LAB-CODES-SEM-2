//depth first search
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100


typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adjList[MAX_VERTICES];
int visited[MAX_VERTICES];


Node* createNode(int vertex) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->vertex = vertex;
	newNode->next = NULL;
	return newNode;
}


void addEdge(int u, int v) {
	Node* newNode = createNode(v);
	newNode->next = adjList[u];
	adjList[u] = newNode;

	newNode = createNode(u);
	newNode->next = adjList[v];
	adjList[v] = newNode;
}


void sortAdjList(int V) {
	for (int i = 0; i < V; i++) {
		Node *ptr1, *ptr2;
		for (ptr1 = adjList[i]; ptr1 != NULL; ptr1 = ptr1->next) {
			for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next) {
				if (ptr1->vertex > ptr2->vertex) {
					int temp = ptr1->vertex;
					ptr1->vertex = ptr2->vertex;
					ptr2->vertex = temp;
				}
			}
		}
	}

}


void DFS(int start) {
	int v;
	visited[start] = 1;
	printf("%d ", start);
	Node* temp = adjList[start];
	while (temp != NULL) {
		int v = temp->vertex;
		if (!visited[v]) {
			DFS(v);
		}
		temp = temp->next;
	}

}

int main() {
    int V, E;
    int u, v, start;

    
    scanf("%d %d", &V, &E);

    
    for (int i = 0; i < V; i++) {
        adjList[i] = NULL;
        visited[i] = 0;
    }

    
    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

   
    sortAdjList(V);

   
    scanf("%d", &start);

    
    DFS(start);

    return 0;
}