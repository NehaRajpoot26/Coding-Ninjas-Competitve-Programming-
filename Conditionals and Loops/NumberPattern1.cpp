// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567
// Sample Input 1 :-
// 3
// Sample Output 1 :
// 1
// 23
// 345
#include<iostream>
using namespace std;

int main(){
	int n,i=1,k,j;
	cin>>n;
	while(i<=n)
	{
k=i;
j=1;
while (j <= i) {
  cout << k;
  j++;
  k++;
}
i++;
cout << endl;
        }
}
