#include <stdio.h>

int graph[10][10], visited[10];
int queue[10], front=-1, rear=-1;
int n;

/* BFS */
void bfs(int start){
    front = rear = -1;

    for(int i=0;i<n;i++)
        visited[i] = 0;

    queue[++rear] = start;
    visited[start] = 1;

    printf("BFS: ");

    while(front != rear){
        int node = queue[++front];
        printf("%d ", node);

        for(int i=0;i<n;i++){
            if(graph[node][i] == 1 && visited[i] == 0){
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

/* DFS */
void dfs(int node){
    printf("%d ", node);
    visited[node] = 1;

    for(int i=0;i<n;i++){
        if(graph[node][i]==1 && visited[i]==0){
            dfs(i);
        }
    }
}

/* Depth Limited Search */
void dls(int node, int limit){
    if(limit < 0)
        return;

    printf("%d ", node);
    visited[node] = 1;

    for(int i=0;i<n;i++){
        if(graph[node][i]==1 && visited[i]==0){
            dls(i, limit-1);
        }
    }
}

/* Iterative Deepening Search */
void ids(int start, int maxDepth){
    printf("IDS:\n");

    for(int depth=0; depth<=maxDepth; depth++){
        for(int i=0;i<n;i++)
            visited[i] = 0;

        printf("Depth %d: ", depth);
        dls(start, depth);
        printf("\n");
    }
}

int main(){
    int choice, start, limit;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Enter start node: ");
    scanf("%d",&start);

    printf("\n1. BFS\n2. DFS\n3. DLS\n4. IDS\nChoose: ");
    scanf("%d",&choice);

    for(int i=0;i<n;i++)
        visited[i]=0;

    switch(choice){
        case 1:
            bfs(start);
            break;

        case 2:
            printf("DFS: ");
            dfs(start);
            break;

        case 3:
            printf("Enter depth limit: ");
            scanf("%d",&limit);
            printf("DLS: ");
            dls(start, limit);
            break;

        case 4:
            printf("Enter max depth: ");
            scanf("%d",&limit);
            ids(start, limit);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}