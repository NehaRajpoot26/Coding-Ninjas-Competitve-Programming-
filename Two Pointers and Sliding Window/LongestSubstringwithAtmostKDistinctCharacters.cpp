// You are given string S of length N, and an integer K. Your task is to find the length of the longest substring that contains at most K distinct characters.
// Sample Input 1:
// 2
// 2
// abcba
// 1
// abccc
// Sample Output 1:
// 3
// 3

#include <iostream>
#include <unordered_map>
int getLengthofLongestSubstring(int k, string s) {
  int start, end, res = -1, count = 0;
  unordered_map<char, int> mp;
  start = end = 0;
  while (end < s.size()) {
    if (mp[s[end]] == 0)
      count++;

    mp[s[end]] += 1;
    while (count > k) {
      if (mp[s[start]] == 1)
        count--;
      mp[s[start++]] -= 1;
    }
    int curr = end - start + 1;
    res = max(curr, res);
    end++;
  }
  return res;
}

