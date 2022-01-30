/******************************************************************************

Problem Description

In Danceland, one person can party either alone or can pair up with another person.

Can you find in how many ways they can party if there are A people in Danceland?

Note: Return your answer modulo 10003, as the answer can be large.



Problem Constraints

1 <= A <= 105


Input Format

Given only argument A of type Integer, number of people in Danceland.


Output Format

Return an integer denoting the number of ways people of Danceland can party.


Example Input

Input 1:

 A = 3

Input 2:

 A = 5



Example Output

Output 1:

 4

Output 2:

 26



Example Explanation

Explanation 1:

 Let suppose three people are A, B, and C. There are only 4 ways to party
 (A, B, C) All party alone
 (AB, C) A and B party together and C party alone
 (AC, B) A and C party together and B party alone
 (BC, A) B and C party together and A
 here 4 % 10003 = 4, so answer is 4.
 

Explanation 2:

 Number of ways they can party are: 26.

*******************************************************************************/
#include <iostream>

using namespace std;



int solve(int A) {

    int DP[A+1];
    DP[0]=0;
    DP[1] = 1;
    DP[2] = 2;
    for (int i =3;i<= A;i++)
    {
       // cout<<"DP[i]"<<DP[i]<<endl;
       // cout<<"A-1"<<i-1<<endl;
       // cout<<"DP[i-2]"<<DP[i-2]<<endl;
        DP[i]= DP[i-1] + ((i- 1 ) * DP[i-2]);
    }
    return DP[A];
}

int solvewithMod(int A) {

    int DP[A+1];
    DP[1] = 1;
    DP[2] = 2;
    for (int i =3;i<= A;i++)
    {

               DP[i]= (DP[i-1] % 10003  + ((i- 1 ) * DP[i-2]) % 10003 )  % 10003;

    }
    return DP[A] ;
}

int main()
{
    
   // int ans =fib(40);
   // std::cout << ans << std::endl;

    int ans1 =solve(4);
    std::cout << ans1 << std::endl;

    return 0;
}
