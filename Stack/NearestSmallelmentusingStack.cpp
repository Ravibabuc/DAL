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

vector<int> prevSmaller(vector<int> &A) 
{
    vector<int> B;
    int n =A.size();
    stack <int> St;
    B.push_back(-1);
    St.push(A[0]);
    
    for (int i =1;i<n;i++)
    {
        if (!St.empty() && St.top() < A[i] )
        {
            if (A[i-1] < A[i])
            {
                B.push_back(A[i-1]);
                St.push(A[i-1]);
            }
            else
            {
                B.push_back(St.top());
                St.push(St.top());
            }
        }
        else
        {
            while (!St.empty() && St.top() >= A[i]  )
            {
                St.pop();
            }
            if (!St.empty() && St.top() < A[i] )
            {
                 B.push_back(St.top());
                St.push(St.top());
            }
            else {
                B.push_back(-1);
                St.push(A[i]);
            }
        }
    }
    return B;
}


int main()
{
    //vector<int> A= {2, 1, 5, 6, 2, 3};
    
   // vector<int> A= {4, 5, 2, 10, 8};
    vector<int> A= {8, 23, 22, 16, 22, 7, 7, 27, 35, 27, 32, 20, 5, 1, 35, 28, 20, 6, 16, 26, 48, 34};
    vector<int> ans = prevSmaller(A);
    for (int i =0;i<ans.size();i++)
    {
        std::cout << ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//-1 8 8 8 16 -1 -1 7 27 7 27 7 -1 -1 1 1 1 1 6 16 26 26 

