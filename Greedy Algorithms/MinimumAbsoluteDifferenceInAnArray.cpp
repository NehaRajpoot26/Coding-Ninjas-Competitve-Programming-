// Given an integer array A of size N, find and return the minimum absolute difference between any two elements in the array.
// We define the absolute difference between two elements ai and aj (where i != j ) as |ai - aj|.
// Sample Input 1:
// 1
// 5
// 2 9 0 4 5
// Sample Output 1:
// 1
#include<bits/stdc++.h>
using namespace std;
#include <vector>
//     int t;
// cin>>t;
// while(t--){ 
int main(){
    
int t;
cin>>t;
while(t--){ 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mini=2e9+5;
    sort(a.begin(),a.end());
     for(int i=0;i<n-1;i++){
         mini=min(mini,a[i+1]-a[i]);
     }
     cout<<mini<<endl;
}
     return 0;
}
