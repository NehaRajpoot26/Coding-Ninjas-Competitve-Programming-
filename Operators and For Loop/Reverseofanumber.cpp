// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Sample Input 1 :
// 1234
// Sample Output 1 :
// 4321
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N;
    cin>>N;
    int rev=0;
    for(int i=N;i>0;i=i/10)
    {
        int c=i%10;
        rev=rev*10+c;
    }
	cout<<rev;
}
