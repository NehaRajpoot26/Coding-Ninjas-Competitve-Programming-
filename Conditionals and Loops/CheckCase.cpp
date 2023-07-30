// Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.
// Sample Input 1 :
// v
// Sample Output 1 :
// 0

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ans;
	cin>>ans;
	int c=ans;
	if(c>=65 && c<=90)
	cout<<1<<endl;
	else if(c>=97 && c<=122)
	cout<<0<<endl;
	else
	cout<<-1<<endl;
}

