#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
  for (int v = 0; v < V; v++)
  {
    cout << "list vertex " << v << "\n root ";
    for (auto x : adj[v])
    {
      cout << " -> " << x;
    }
    printf("\n");
  }

  for (int v = 0; v < V; v++)
  {
  }
}

void printTable(vector<int> adj[], int V)
{
  for (int i = 0; i < V; i++)
  {
    cout << i;
    for (auto x : adj[i])
    {
      cout << " -> " << x;
    }
    printf("\n");
  }
}

int main()
{
  system("clear");

  int V = 5;

  vector<int> adj[V];
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 4);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 3);
  addEdge(adj, 1, 4);
  addEdge(adj, 2, 3);
  addEdge(adj, 3, 4);
  printGraph(adj, V);

  printf("\n");
  printTable(adj, V);
  printf("\n");

  return 0;
}