#include<bits/stdc++.h>

using namespace std;

string kthPermutation(int n, int k) {

    int fact=1;

    vector<int> ans;

    for(int i=1;i<n;i++){

        fact*=i;

        ans.push_back(i);

    }

    ans.push_back(n);

    k--;

    string res="";

    while(1){

       res+=to_string(ans[k/fact]);

       ans.erase(ans.begin()+k/fact);

       if(ans.size()==0){

           break;

       }

       k%=fact;

       fact/=ans.size();

    }

    return res;

    // Write your code here.

}

 
