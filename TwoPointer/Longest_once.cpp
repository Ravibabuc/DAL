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

int solve(string A) 
{
    int x=0;
    int n =A.size();
    int i=0;
    int j =0;
    int ans =INT_MIN;
    int znt=0;
    int k =1;
    while(j<n)
    {
        if (A[j] =='0')
            znt ++;
        while(znt>k)
        {
            if (A[i]== '0')
                znt --;
            i ++;
        }
        ans = max(ans, j-i+1);
        j++;
           
    }
      
    return ans;
}




int main()
{
    string A = "00001";
 // string A = "111011101";
  //string A = "010100110101";
  
 // string A = "1101001100101110";
    int ans = solve(A);
    cout<<"ans "<<ans<<endl;
    
   // for(int i =0;i<ans;i++)
      //  cout<<A[i]<<endl;
    return 0;
}
