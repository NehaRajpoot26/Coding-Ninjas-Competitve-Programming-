// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
// ALTIMAGE
// Sample Input 1 :
// 4 2 
// 1 2 
// 3 4 
// 5 6 
// 7 8
// Sample Output 1 :
// 16 20

#include<iostream>
using namespace std;
int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int M,N,i,j,sum=0;
    cin>>M>>N;
    int a[M][N];
   for(i=0;i<M;i++)
   {
       for(j=0;j<N;j++){ 
           cin>>a[i][j];
   }
}
 for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++){ 
           sum+=a[j][i];
   }
     cout<<sum<<" ";
     sum=0;
}


}
