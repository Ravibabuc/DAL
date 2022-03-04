/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreater1(vector<int> &A) 
{
    int n = A.size();
    vector<int> B;
    for (int i =0;i<n;i++)
    {
        int Value =-1;
        for (int j =i+1;j<n;j ++)
        {
            if (A[i] < A[j])
            {
                Value = A[j];
                
                break;
            }
        }
        B.push_back(Value);
        
    }
    return B;
}

vector<int> nextGreater(vector<int> &A) 
{
    int n = A.size();
    stack<int> St;
    vector<int> B;
    B.resize(n);
  
    for (int i =n-1;i>=0 ;i--)
    {
            
             
             while(!St.empty() && St.top() <= A[i])
             {
                 St.pop();
             }
           
             B[i] = St.empty()? -1 : St.top();
               St.push(A[i]);
    }
    
    //39, 27, 11, 4, 24, 32, 32, 1
     // cout<<"Value "<<Value<<endl;
     //   -1 32 24 24 32 -1 -1 -1 
       // cout<<"Value final "<<endl;
    return B;
}


int main()
{
   // vector<int> A= {3, 4, 1,5,10, 12, 3, 6,1};
    vector<int> A= {39, 27, 11, 4, 24, 32, 32, 1};
    
   
    vector<int> ans = nextGreater(A);
    for (int i =0;i<ans.size();i++)
    {
        std::cout << ans[i]<<" ";
    }
    cout<<endl;
    
}
