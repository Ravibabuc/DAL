/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;


int largestRectangleArea1(vector<int> &A) 
{
    int n = A.size();
    int l=0, r = n-1;
    int ans=INT_MIN;
    
     for (int i =0;i<n;i++)
     {
        int minV =INT_MAX;
        for (int j =i;j<n;j++)
        {
            minV = min(minV, A[j]);
            //cout<<" MIN "<<minV<<endl;
            //cout<<" j "<<j<<endl;
            //cout<<" i "<<i<<endl;
            ans = max(ans, minV * ((j-i) +1));
          //  std::cout << "ans" << ans<<std::endl;
        }
       
        
        
    }
    return ans;
}


int main()
{
    vector<int> A= {2};
    int ans = largestRectangleArea(A);
    std::cout << "ans" << ans<<std::endl;

    return 0;
}
