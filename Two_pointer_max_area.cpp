/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;


int maxArea(vector<int>& height) 
{
    int n =height.size();
    int ans=INT_MIN;
    int inc =0;
    for (int i =0, j=n-1;i<j;)
    {
        
       ans = max ((min(height[i], height[j]) * (j-i)), ans);
             if (height[i] < height[j] && i < j)
         {
           i++;
       }
       else
       {
        j--;    
        inc =1;
       }
      
    }
     return ans;   
}






int main()
{
  
    
    //vector<int> A ={1,8,6,2,5,4,8,3,7};
     vector<int> A ={2,3,4,5,18,17,6};
    
    int ans = maxArea(A);
    cout <<"ans "<<ans<<endl;
    return 0;
}
