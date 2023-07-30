// Print the following pattern
// Pattern for N = 4

//    *
//   ***
//  *****
// *******

#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int i=1,p=n-2,i1,j,k=i;
if(n==0)
cout<<endl;
else{ 
while(i<=n)
{

  for (int i1 = p; i1 >=0; i1--) {
    cout << " ";
  }
  
    p--;
                j=1;
                while (j <= k) {
                  cout << "*";

                  j++;
                }
                cout << endl;
                k=k+ 2;
                i++;
}
}
}


