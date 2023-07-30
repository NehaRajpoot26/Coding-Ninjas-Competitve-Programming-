// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)
// Sample Input 1 :
// 10
// 1
// Sample Output 1 :
// 55
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N,C;
    cin>>N>>C;
    switch(C)
    {
        case 1:
    {
        int sum=0;
        for(int i=1;i<=N;i++)
        {
             sum+=i;
        }
        cout<<sum;
         break;
    }
    case 2: 
            {
                 int sum=1;
        for(int i=1;i<=N;i++)
        {
             sum*=i;
        }
        cout<<sum;
                 break;
            }
    default:{ 
            cout<<"-1";
    }
    }
	
}
