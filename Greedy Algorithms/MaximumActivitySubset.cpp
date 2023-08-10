// You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
// Sample Input 1
// 6
// 1 2
// 3 4
// 0 6
// 5 7
// 8 9
// 5 9
// Sample Output 1
// 4
#include <bits/stdc++.h>
bool cmp(const vector<int> &v1, const vector<int> &v2) 
{

     if(v1[0]*v2[1] == v1[1]*v2[0]){ return v1[2] < v2[2];
      }
       return v1[0]*v2[1] > v1[1]*v2[0]; 
       }
        vector<int> minLoss(int n, vector<int> &time, vector<int> &loss) { 
     vector<vector<int>> tasks; for(int i = 0; i < n; ++i)
      {
           vector<int> temp; temp.push_back(loss[i]); 
           temp.push_back(time[i]); temp.push_back(i + 1); 
           tasks.push_back(temp); } 
sort(tasks.begin(), tasks.end(), cmp); 
vector<int> res; for(int i = 0; i < n; ++i) { res.push_back(tasks[i][2]); } 
return res; 

}
#include<bits/stdc++.h>
#include <vector>
using namespace std;

 bool cmp(pair<int,int>&a,pair<int,int>&b){ 
    return  a.second<b.second;
    }
int main(){
    
    // write your code here

    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end(),cmp);
    int t=1;
    int l=0;
    for(int i=1;i<n;i++)
    {
        if(a[i].first>=a[l].second)
        {
            t++;
            l=i;
        }

    }
    cout<<t<<endl;
    return 0;
}
