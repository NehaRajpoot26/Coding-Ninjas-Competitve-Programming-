// You are given weights and values of N items. You have to select and put these selected items in a knapsack of capacity W. Select the items in such a way that selected items give the maximum total value possible with given capacity of the knapsack..
// Sample Input 1:
// 4 22
// 6 4
// 6 4
// 4 4
// 4 4
// Sample Output 1:
// 20.000000
#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;


bool cmp(pair<int,int>&a , pair<int,int>& b){
    double f = (double)a.second/a.first;
    double s = (double)b.second/b.first;
    
    return f>s;
}
 
 
void precal(){
}
 
void solve(){
    int n,capacity;
    cin>>n>>capacity;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        // .first is weight and .second is price
        cin>>a[i].first>>a[i].second;
    }
    
    sort(a.begin(),a.end(),cmp);
    
    
    int total_weight=0;
    double profit=0;
    for(int i=0;i<n;i++){
        if(total_weight+a[i].first<capacity){
            total_weight+=a[i].first;
            profit+=(double)a[i].second;
        }
        else{
            int remain = capacity - total_weight;
            profit +=(double)(a[i].second)*((double)remain/a[i].first);
            break;
        }
    }
    cout<<"total profit: ";
    cout<<profit;
}   
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            precal();
            int t=1;
            // cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}
