// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
// Print the prime numbers in different lines.
// Input Format :
// Integer N
// Output Format :
// Prime numbers in different lines
// Constraints :
// 1 <= N <= 100
// Sample Input 1:
// 9
// Sample Output 1:
// 2
// 3
// 5
// 7

#include <iostream>
using namespace std;

int main(){

	 int n,p=0;
	 cin>>n;
	 for(int i=2;i<=n;i++)
	 {
		 int k=i;
	for(int i1=1;i1<=k;i1++)
	{
          if (k % i1 == 0) {
            p++;
          }
        }
		if(p==2)
		cout<<k<<endl;
		p=0;
	 }
  
}
