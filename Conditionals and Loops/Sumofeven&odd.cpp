// Write a program to input an integer 'n' and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "132456", even digits are 2, 4 and 6 and odd digits are 1, 3 and 5.

// Sample Input 1:
// 132456
// Sample Output 1:
// 12 9
  
// Explanation of sample input 1 :
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

#include<iostream>
using namespace std;
int main() {
	// Write your code here
	int n,s1=0,s2=0,i=1;
	cin>>n;
	while(n>0)
	{
int c=n%10;
if(c%2==0)
s1+=c;
else
s2+=c;
n=n/10;
	}
	cout<<s1<<" "<<s2<<endl;
}
