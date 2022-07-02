#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector <pair<int, int>>adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void printGraph(vector<pair<int,int>>adj[], int V)
{
    int v, w;
    for (int u=0; u<V; u++)
    {
        cout << "vertex " << u << " punya edge\n";
        for(auto it = adj[u].begin(); it!=adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "vertex " << v << " punya weight(bobot) = "<< w << "\n";
        }
        cout << "\n";
    }
}

int main()
{
    int V = 5;
    vector<pair<int,int>>adj[V];
    addEdge(adj, 0,1,1);
    addEdge(adj, 0,4,2);
    addEdge(adj, 1,2,3);
    addEdge(adj, 1,3,4);
    addEdge(adj, 1,4,5);
    addEdge(adj, 2,3,6);
    addEdge(adj, 3,4,7);
    printGraph(adj, V);
    return 0;
}