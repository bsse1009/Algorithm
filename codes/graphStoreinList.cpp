#include <iostream>
#include <vector>

using namespace std;

#define MAX 100000 //maximum node

vector <int> edges[MAX];
vector <int> cost[MAX];

int main() {
  int numNodes, numEdges;

  cin >> numNodes >> numEdges;

  for (int i = 1; i <= numEdges; i++) {
    int x, y;

    cin >> x >> y;

    edges[x].push_back(y);
    edges[y].push_back(x);
    cost[x].push_back(1);
    cost[y].push_back(1);
  }

  int x,i;
  cin >> x;
  int size = edges[x].size();

  cout << x << " : " ;
  for (i = 0; i < size; i++)
  {
      cout << edges[x][i] << ", ";
  }
  cout << endl;


  int numOfOutDegree, numOfInDegree;

  cin >> x;
  numOfOutDegree = edges[x].size();
  cout <<"For Vertics " << x << " Number of OutDegree : "  << numOfOutDegree << endl;

  return 0;
}
