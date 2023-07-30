// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
// Sample Input 1 :
// 10
// Sample Output 1 :
// 5 11 14 17 23 26 29 35 38 41

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	 int x,c=0;
    cin>>x;
    int n=1;
    while(c<x)
    {
        int k=(3*n)+2;
        if(k%4==0)
        {}
        else
        {
            cout<<k<<" ";
            c++;
        }
        n++;
    }

}
