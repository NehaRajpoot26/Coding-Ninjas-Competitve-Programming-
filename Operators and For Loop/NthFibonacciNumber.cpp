// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n - 1) + F(n - 2), 
//     Where, F(1) = 1, F(2) = 1
// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
// Example :
// Input: 6

// Output: 8
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N==0)
    cout<<0<<endl;
      if(N==1)
    cout<<1<<endl;
    int a=1,b=1,c,i;
   
    for(i=3;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
    if(i==N)
    cout<<c;
    }
}
