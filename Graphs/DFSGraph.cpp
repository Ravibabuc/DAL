/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
//#include<bits/stdc++.h>

using namespace std;
bool visited[5];
vector <int> adj[5];


void InsertEdgeGraph(vector <int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) 
    {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout<<endl;
    }
}


void dfs(int s)
{   
    if (visited[s])
        return;
    visited[s] = true;
// process node s
// cout << "\n Adjacency list of vertex " << s
            // << "\n head ";
     cout << "-> " << s;
    for (auto u: adj[s]) {
     
        //  cout << "-> " << u;
     
        dfs(u);
    }
}


int main()
{
    int V =5;
  
    InsertEdgeGraph(adj, 0, 1);
    InsertEdgeGraph(adj, 0, 4);
    InsertEdgeGraph(adj, 1, 2);
    InsertEdgeGraph(adj, 1, 3);
    InsertEdgeGraph(adj, 1, 4);
    InsertEdgeGraph(adj, 2, 3);
    InsertEdgeGraph(adj, 3, 4);
    dfs(0);
    return 0;
}
