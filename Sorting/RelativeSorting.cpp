// Given two arrays ‘ARR’ and ‘BRR’ of size ‘N’ and ‘M’ respectively. Your task is to sort the elements of ‘ARR’ in such a way that the relative order among the elements will be the same as those are in ‘BRR’. For the elements not present in ‘BRR’, append them in the last in sorted order.
// For example
// Consider the arrays as ARR = { 9, 5, 8, 4, 6, 5 } and BRR = { 8, 4, 5 }
// The output for the above example  is { 8, 4, 5, 5, 6, 9 }.
// Sample Input 1:
// 2
// 6 3
// 9 5 8 4 6 5 
// 8 4 5
// 4 4
// 1 8 1 6 
// 1 9 6 7 
// Sample Output 1:
// 8 4 5 5 6 9
// 1 1 6 8
#include<bits/stdc++.h>
vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m)
{
   // Write your code here.
   unordered_map<int,int> map;    // to store key n freq of arr
   for(int i=0;i<n;i++){
       map[arr[i]]++;      
   }

   vector<int> ans;      // vector to return
   for(int i=0;i<m;i++){     // iterate brr for relative sorting
       if(map.count(brr[i])==0){   // simple-not present in arr
           continue;
       }else{        // present in arr
           while(map[brr[i]]!=0){   // add till freq becomes 0
               ans.push_back(brr[i]);
               map[brr[i]]--;
           }
           map.erase(brr[i]);    // delete from map
       }
   }

   vector<int> rem;      // now add rem elements from arr
   for(auto x : map){
       while(x.second!=0){
           rem.push_back(x.first);
           x.second--;
       }
   }
   sort(rem.begin(),rem.end());   // sort rem vector
   ans.insert(ans.end(), rem.begin(), rem.end());  // concatenate
   
   return ans;        // simple
}

