// Given a decimal number (integer N), convert it into binary and print.
// Sample Input 1 :
// 12
// Sample Output 1 :
// 1100

#include<iostream>
using namespace std;

int main() {
	
    int N;
    cin>>N;
   if(N==0)
       cout<<"0";
    int arr[32];
   int i=0;
    while(N>0)
    {
            arr[i]=N%2;
        N=N/2;
       i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<arr[j];
}
