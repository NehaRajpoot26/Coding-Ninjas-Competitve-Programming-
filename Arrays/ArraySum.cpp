// Given an array of length N, you need to find and print the sum of all elements of the array.
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26
#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N;
    cin>>N;
    
    int array[N];
    for(int i=0;i<N;i++)
        cin>>array[i];
    
    int sum=0;
    for(int i=0;i<N;i++)
        sum+=array[i];
    
    cout<<sum;
}
