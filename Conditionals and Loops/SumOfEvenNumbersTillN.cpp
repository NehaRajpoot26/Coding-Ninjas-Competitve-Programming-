// Given a number N, print sum of all even numbers from 1 to N.
// Sample Input 1 :
//  6
// Sample Output 1 :
// 12
#include<iostream>
using namespace std;


int main(){
int n,i=1,s=0;
cin>>n;
while (i <= n) {

  if (i % 2 == 0) {
    s = s + i;
  }
  i = i + 1;
}
cout << s << endl;
}
