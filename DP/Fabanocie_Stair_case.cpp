/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int Staircase(int n)
{
    if(n <= 3)
        return n;
    return Staircase(n-1) + Staircase(n-2);
}

int fib(int n)
{
    if(n <= 3)
        return n;
    return fib(n-1) + fib(n-2);
}

//0 1 1 2 3 5 8 13

int fibiter(int n)
{
    if(n<=1)
        return n;
    int ans=0;
    int ans1 =1;
    int ans2;
    for(int i=1;i<n;i++)
    {
        ans2 = ans + ans1;
        ans =ans1;
        ans1 =ans2;
        //ans1= ans + ans1;
    }
    return ans2;
}

int Staircase1(int n)
{
    if(n<=3)
        return n;
    int ans=2;
    int ans1 =3;
    int ans2;
    for(int i=3;i<n;i++)
    {
        ans2 = ans + ans1;
        ans =ans1;
        ans1 =ans2;
        //ans1= ans + ans1;
    }
    return ans2;
}

int main()
{
    
   // int ans =fib(40);
   // std::cout << ans << std::endl;

    int ans1 =Staircase1(6);
    std::cout << ans1 << std::endl;

    return 0;
}
