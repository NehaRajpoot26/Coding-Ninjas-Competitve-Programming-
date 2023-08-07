// You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.
// -10 ^ 9 <= ARR[i] <=10 ^ 9

// Where 'T' denotes the number of test cases, 'N' represents the size of the array, 'TARGET' represents the sum required, and 'ARR[i]' represents array elements.

// Time Limit: 1 sec.
// Sample Input 1 :
// 2
// 4 9
// 2 7 11 13
// 5 1
// 1 -1 -1 2 2
// Sample Output 1:
// 2 7
// -1 2
// -1 2
#include <bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    vector<pair<int,int>> ans;
    sort(arr.begin(),arr.end());
    int s = 0, e = n-1;
    while(s<e){
        if(arr[s]+arr[e] == target){
            pair<int,int>p(arr[s],arr[e]);
            ans.push_back(p);
            s++;
            e--;
        }
        else if(arr[s]+arr[e]<target){
            s++;
        }
        else{
            e--;
        }
    }
    if(ans.size() == 0){
        pair<int,int>p(-1,-1);
        ans.push_back(p);
        return ans;
    }
    return ans;

