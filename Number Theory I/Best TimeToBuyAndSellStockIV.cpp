#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices, int n, int k){

    // Write your code here.

    vector<vector<int>>prev(2,vector<int>(k+1,0)),curr(2,vector<int>(k+1,0));
int ind;
    for(ind=n-1;ind>=0;ind--){

        for(int buy=0;buy<=1;buy++){

            for(int cap=1;cap<=k;cap++){

                int profit=0;

                if(buy){

                  profit=max(-prices[ind]+prev[0][cap],prev[1][cap]);

                }

                else{

                  profit=max(prices[ind]+prev[1][cap-1],prev[0][cap]);

                }

                curr[buy][cap]=profit;

            }

        }

        prev=curr;

    }

    return prev[1][k];

}

 
