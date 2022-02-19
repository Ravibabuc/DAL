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
//bool visited[5];
//vector <int> adj[5];


void InsertEdgeGraph(vector <int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}

void InsertEdgeGraph1(vector <int> adj[], int u, int v)
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


int dfs(int s, int dest, vector<int> adj[], bool visited[])
{   
  
  
    
    if (s== dest)
      return 1;
   
  
     if (visited[s] == true)
        return 0;
     
    visited[s] = true;

    cout << "-> " << s;
    for (auto u: adj[s]) {
     
      // if (s== dest)
        //return 1;
     
      if (visited[u] != true)
        if (dfs(u, dest, adj, visited)) return 1;
    }
    return 0;
}


int solve(int A, vector<vector<int> > &B) 
{
    bool visited[A];
    vector <int> adj[A];
    
    for (int i =0;i<B.size();i ++)
    {
        for (int j=0;j<1; j++ )
        {
            cout<<"i "<<i<<"  j"<<j<<endl;
          //  if (B[i][i] != B[i][j])
           // {
                InsertEdgeGraph(adj, B[i][j], B[i][j+1]);
             //   cout<<"B[i][i] "<<B[i][j]<<"   B[i][j] "<<B[i][j+1]<<endl;
            //}
        }
    }
    int ans = dfs(5, 1, adj, visited);
    cout<<"ans "<<ans<<endl;
    //printGraph(adj,  A);
} 

int main()
{
    int V =6;
   vector <int> adj[V+1];
     
  //  InsertEdgeGraph1(adj, 0, 1);
    //InsertEdgeGraph1(adj, 0, 4);
    //InsertEdgeGraph1(adj, 1, 2);
    //InsertEdgeGraph1(adj, 1, 3);
    //InsertEdgeGraph1(adj, 1, 4);
    //InsertEdgeGraph1(adj, 2, 3);
    //InsertEdgeGraph1(adj, 3, 4);
    //int ans = dfs(4, 1, adj);
   // printGraph(adj,  V);
    vector<vector<int> > B= {{1, 2},{4, 1},{2, 4}, {3, 4}, {5, 2},{1, 3} };
    int ans = solve(6, B);
    //cout<<"ans "<<ans<<endl;
    return 0;
}
