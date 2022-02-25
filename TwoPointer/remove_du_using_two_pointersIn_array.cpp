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


int removeDuplicates(vector<int>& nums)
{
    int n=nums.size();
    int cnt =0;
    if (n == 0)
        return 0;

    int slow =0;
    int fast =1;
    while(fast<n)
    {

        if(nums[slow] != nums[fast])
        {
            slow ++;
            nums[slow]= nums[fast];
            
        }
        else
        {
            cnt ++;
        }
        fast ++;
        
    }
    
     return n -cnt;
    
    
}





//-1 -2 -3 1 ,2 , 3 ,4 5 6, 10

//4


int main()
{
  // int  A[] ={-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436,
  //  -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 
 //   912, 667, -701, 35, 894, -297, 811, 322 } ;
  // int B =30;
    
    //vector<int> A = {-1, -2 ,-3 ,1 ,2 , 3 ,4, 5 ,6, 10};
    //int B = 4;
    //cout<<solve(A, B)<<endl;
    
    vector<int> A = {1, 1,2};
    int ans = removeDuplicates(A);
    cout<<"ans "<<ans<<endl;
    
    for(int i =0;i<ans;i++)
        cout<<A[i]<<endl;
    return 0;
}
