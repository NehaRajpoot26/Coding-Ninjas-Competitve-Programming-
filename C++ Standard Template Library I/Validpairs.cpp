// Given an array of integers and numbers k and m, write a function that returns true if given array can be divided into pairs such that the sum of every pair gives remainder m when divided by k.
// Sample Input :
// 4
// 2 1 5 7
// 9
// 3
// Sample Output :
// true
// Explanation :
// Pairs will be (2,1) and (5,7)
#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n&1)
        return false;
    
    unordered_map<int,int>mp;
    
    for(int i = 0;i<n; i++){
        mp[arr[i]%k]++;
        
    }
     int check1,check2;
    for(int i = 0; i<n;i++){
        check1 = mp[arr[i]%k];
        
        if(arr[i]%k <=m){
            check2 = mp[m-arr[i]%k];
        }
        else{
            check2 = mp[k-(arr[i]%k) +m];
        }
        if(check1 !=check2)
            return false;
    }
    return true;
    }
