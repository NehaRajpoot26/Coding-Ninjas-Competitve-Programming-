// Ninja works in an XYZ MNC which follows a very strict rule regarding the pay. Ninja has been assigned ‘N’ tasks. Each task requires some days to finish, which is given in the form of an array ‘TIME’. For each day of delay before starting to work in task ‘i’ a loss is incurred on Ninjas’ pay which is given in an array ‘LOSS’. Ninja asks you for help to find the order in which the tasks should be completed such that there is a minimum loss in Ninjas’ pay.
// Sample Input 1 :
// 2
// 4
// 4 1000 2 5
// 3 1 2 4
// 3
// 2 4 1
// 1 2 3
// Sample Output 1 :
// 3 4 1 2
// 3 1 2
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
