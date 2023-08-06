// You are given with an integer k and an array of integers that contain numbers in random order. You have to find k largest numbers from given array. You need to save them in an array and return it.
// .
// Sample Input 1:
// 13
// 2 12 9 16 10 5 3 20 25 11 1 8 6 
// 4
// Sample Output 1:
// 12 16 20 25

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    priority_queue<int>pq;
    for(int i=0;i<n;i++) pq.push(a[i]);
    
    for(int i=0;i<k;i++){
        if(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
}
