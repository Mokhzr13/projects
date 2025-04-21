#include <stdio.h>
#include <limits.h>
#define V 100
int MIN(int dist[], int sptset[], int v)
{
    int min = INT_MAX, min_index;
    for (int i = 0; i < v; i++)
    {
        if (sptset[i] == 0 && dist[i] <= min)
        {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}
void dijkstra(int graph[V][V], int v, int src)
{
    int dist[v];
    int sptset[v];
    for (int i = 0; i < v; i++)
    {
        dist[i] = INT_MAX;
        sptset[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < v - 1; count++)
    {
        int u = MIN(dist, sptset, v);
        sptset[u] = 1;
        for (int i = 0; i < v; i++)
        {
            if (!sptset[i] && graph[u][i] && dist[u] != INT_MAX && dist[u] + graph[u][i] < dist[i])
            {
                dist[i] = dist[u] + graph[u][i];
            }
        }
        printf("Vertex\tDistance from source\n");
        for (int i = 0; i < v; i++)
        {
            printf("%d\t%d\n", i, dist[i]);
        }
    }
}
int main()
{
    int v, src;
    printf("Please enter the number of Vertices :");
    scanf("%d", &v);
    if (v <= 0 || v > V)
    {
        printf("Invalid");
        return 1;
    }
    int graph[V][V];
    printf("Please enter the adjacency matrix of graph :\n");
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
            {
                graph[i][j] = 0;
            }
            else
            {
                printf("enter the weight of the edge from vertex %d to vertex %d :", i, j);
                scanf("%d", &graph[i][j]);
            }
        }
    }
    printf("Please enter the source vertex: ");
    scanf("%d", &src);
    if (src < 0 || src >= v)
    {
        printf("the source vertex must be between 0 and %d. \n", v - 1);
        return 1;
    }
    dijkstra
(graph, v, src);
    return 0;
}