/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include<stack>

using namespace std;

int solve(vector<int> &A) 
{
    vector<int> B;
    int n =A.size();
    stack <int> St;
    B.push_back(-1);
    St.push(A[0]);
    
    int ans=0;
    
    
    for (int i =0;i<n;i++)
    {
        int minV =INT_MAX;
        int maxV =INT_MIN;
        for (int j =i;j<n;j++)
        {
            minV = min(minV, A[j]);
            maxV = max(maxV, A[j]);
            //cout<<"min "<<minV<<" maxV "<<maxV<<endl;
            ans += maxV - minV;
        }
       
    }
    return ans;
}


int main()
{
    vector<int> A= {4};
    
   
    int  ans = solve(A);
    cout<<"ans "<<ans<<endl;
    return 0;
}

//-1 8 8 8 16 -1 -1 7 27 7 27 7 -1 -1 1 1 1 1 6 16 26 26 

