Print the following pattern
Pattern for N = 4
   1
  23
 345
4567

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1,p=n-1,i1,k,j;
while(i<=n)
{

  for (int i1 = p; i1 > 0; i1--) {
    cout << " ";
  }
        p--;
		k=i;
		j=1;
                while (j <= i) {
                  cout << k;
                  k++;
                  j++;
                }
                cout << endl;
                i++;
}
}
