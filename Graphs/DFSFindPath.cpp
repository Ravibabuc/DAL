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


void InsertEdgeGraph(vector<vector<int>> &adj, int u, int v)
{
  //  cout<<"insert grpa"<<endl;
  
  
    //adj[u].resize(1);
    adj[u].push_back(v);
   // adj[v].push_back(u);
    //cout<<"insert end grpa"<<endl;
}

void InsertEdgeGraph1(vector <int> adj[], int u, int v)
{
    adj[u].push_back(v);
   adj[v].push_back(u);
    
}

void printGraph(vector<vector<int>> &adj, int V)
{
    
  // cout<<"print graph"<<endl;
    for (int v = 0; v < V; ++v) 
    {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout<<endl;
    }
}



int dfs(int s, int dest, vector<vector<int>> &adj, bool visited[])
{   
  
    if (s== dest)
      return 1;
      if (visited[s] == true)
        return 0;
   
    visited[s] = true;

  //  cout << "-> " << s;
    for (auto u: adj[s]) {
     
       if (visited[u] != true)
        if (dfs(u, dest, adj, visited)) 
            return 1;
    }
    return 0;
}


int solve(int A, vector<vector<int> > &B) 
{
    bool visited[A+1] ;
     for (int i =0;i<A+1; i++)
      visited[i]= false;
      
    vector<vector<int>> adj;
    adj.resize(A+1);
 
    
    
    for (int i =0;i<B.size();i ++)
    {
       // for (int j=0;j<1; j++ )
      //  {
          // cout<<"i "<<i<<"  j"<<j<<endl;
          //  if (B[i][i] != B[i][j])
           // {
      //    cout<<"B[i][j] "<<B[i][j]<<"   B[i][j+1] "<<B[i][j+1]<<endl;
      
                
                InsertEdgeGraph(adj, B[i][0], B[i][1]);
             //   cout<<"B[i][i] "<<B[i][j]<<"   B[i][j] "<<B[i][j+1]<<endl;
            //}
        //}
    }
 // printGraph(adj,  A+1);
 
 int src =1;
   int ans = dfs(src, A, adj, visited);
    ///cout<<"ans "<<ans<<endl;
  
   return ans;
} 

int main()
{
    int V =6;
   //vector <int> adj[V+1];
     
  //  InsertEdgeGraph1(adj, 0, 1);
    //InsertEdgeGraph1(adj, 0, 4);
    //InsertEdgeGraph1(adj, 1, 2);
    //InsertEdgeGraph1(adj, 1, 3);
    //InsertEdgeGraph1(adj, 1, 4);
    //InsertEdgeGraph1(adj, 2, 3);
    //InsertEdgeGraph1(adj, 3, 4);
    //int ans = dfs(4, 1, adj);
   // printGraph(adj,  V);
   // vector<vector<int> > B= {{1, 2},{4, 1},{2, 4}, {3, 4}, {5, 2},{1, 3} };
 vector<vector<int> > B={  {1, 4},{2, 1} , {4, 3},  {4, 5},  {2, 3},   {2, 4},  {1, 5},   {5, 3},   {2, 5},   {5, 1},  {4, 2},  {3, 1},  {5, 4},  {3, 4},  {1, 3},  {4, 1},  {3, 5},  {3, 2},  {5, 2}};
   
 // vector<vector<int> > B={{1, 2}, {2, 3},  {4, 3}};
    int A=5;
    int ans = solve(A, B);
    cout<<"ans "<<ans<<endl;
    return 0;
}
