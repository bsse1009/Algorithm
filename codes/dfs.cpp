#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define MAX 100000 //maximum node

vector <int> edges[MAX];

void dfs (int source,int v)
{
    bool visited [v] = {false};
    int level [v];
    stack <int> q;

    q.push(source);
    visited [source] = true;
    level [source] = 0;
    while (!q.empty())
    {
        int temp = q.top();
        q.pop();
        cout << temp << " ";

        for (int i = 0;i < edges [temp].size(); i++)
        {
            //cout << "temp" << endl;
            if (!visited [edges[temp][i]])
            {
                visited [edges[temp][i]] = true;
                q.push(edges[temp][i]);
                //visited [temp] = true;
                level [edges[temp][i]] = level [source]+1;
            }
        }
        source = temp;
    }
    cout << endl;
}

int main ()
{
     int numNodes, numEdges;

  cin >> numNodes >> numEdges;

  for (int i = 1; i <= numEdges; i++) {
    int x, y;

    cin >> x >> y;

    edges[x].push_back(y);
    edges[y].push_back(x);
  }
    int x;
    cin >> x;

    dfs (x,numNodes);
}
