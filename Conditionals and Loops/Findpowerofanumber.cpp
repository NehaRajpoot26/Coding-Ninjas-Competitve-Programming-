// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1

// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    int x,n,p;
    cin>>x>>n;
    if(x==0 && n==0)
        cout<<1;
    else{ 
        p=pow(x,n);
        cout<<p;
    }	
}
