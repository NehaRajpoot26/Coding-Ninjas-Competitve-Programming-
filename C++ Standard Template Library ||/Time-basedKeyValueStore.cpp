// You are given a stream of tuples which constitute three things ‘Key’, ‘Val’, and the ‘Timestamp’.
// Your task is to implement the ‘TimeBased’ class having the two functions:
// 1) The first function is ‘setKey(string Key, string Val, int Timestamp)’, which stores the ‘Key’ and the ‘Val’ along with the ‘Timestamp’.

// 2) The second function is ‘getValue(string TargetKey, int TargetTimestamp)’, which returns the value of ‘Val’ associated with the ‘TargetKey’ such that its ‘Timestamp’ value is less than or equal to the ‘TargetTimestamp’. If there are multiple values of ‘Val’, return the value of ‘Val’ with the highest value of ‘Timestamp’ among the valid ones. If there is no valid value of ‘Val’ return “-1” as a string.
// ‘Timestamps’ will always be in strictly increasing order.
// Sample Input 1:
//  2
// 4
//  1 abc def 10
//  1 abc ghi 20
//  2 abc 10
//  2 abc 5
//  3
//  1 bbb ccc 5
//  1 ddd ccc 5
//  2 ddd 6 
// Sample Output 1:
//  def  -1
//  ccc
// 1 fff hhh 14
// 2 fff 14 
      
#include <bits/stdc++.h>
    class Timebased {
public:
  unordered_map<string, vector<pair<string, int>>> mp;
  Timebased() {
    // Intialise your data structure here.
  }

  void setKey(string key, string val, int timestamp) {
    // Write your code here.
    mp[key].push_back(make_pair(val, timestamp));
  }

  string getValue(string targetKey, int targetTimestamp) {
    // Write your code here.
    vector<pair<string, int>> v = mp[targetKey];
    string ans = "-1";
    for (int i = v.size() - 1; i >= 0; i--) {
      auto it = v[i];
      string val = it.first;
      int time = it.second;
      if (time <= targetTimestamp) {
        ans = val;
        break;
      }
    }
    return ans;
  }
};
