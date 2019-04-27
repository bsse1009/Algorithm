
#include<iostream>
using namespace std;

int numberOfVertices,numberOfEdge;
int graph[100][100];
int dis[100];
bool visited[100];

int minimum()
{
    int min = INT_MAX, minIndex = 0;

    for(int i=0; i<numberOfVertices; i++)
        if(visited[i]==false && dis[i]<=min)
            min = dis[i], minIndex = i;

    return minIndex;
}

void dijkstra(int source)
{
    for(int i=0; i<numberOfVertices; i++)
        dis[i] = INT_MAX, visited[i] = false;

    dis[source] = 0;

    for(int i=0; i<numberOfVertices; i++)
    {
        int u = minimum();
        visited[u] = true;

        for(int v=0; v<numberOfVertices; v++)
            if(visited[v]==false && graph[u][v]!=0 && dis[u]!=INT_MAX && (dis[u]+graph[u][v])<dis[v])
                dis[v] = (dis[u]+graph[u][v]);

    }
}

void printDis()
{
    for(int i=0; i<numberOfVertices; i++)
        cout << i << "\t" << dis[i] << endl;
}

int main()
{
    cin >> numberOfVertices >> numberOfEdge;


    for(int i=0; i<numberOfVertices; i++)
        for(int j=0; j<numberOfVertices; j++)
            graph[i][j] = 0;


    for(int i=0; i<numberOfEdge; i++)
    {
        int n1,n2,weight;
        cin >> n1 >> n2 >> weight;
        graph[n1][n2] = weight;
    }
    int x;
    cin >> x;
    dijkstra(x);
    printDis();
}
