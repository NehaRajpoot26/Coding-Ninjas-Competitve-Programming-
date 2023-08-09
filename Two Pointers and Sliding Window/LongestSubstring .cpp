// You are given a string ‘S’, you need to find the length of the longest substring that contains at most two distinct characters.
// Note:
// A string ‘B’ is a substring of a string ‘A’ if ‘B’ that can be obtained by deletion of, several characters(possibly none) from the start of ‘A’ and several characters(possibly none) from the end of ‘A’. 
// Sample Input 1 :
// 2
// ninninja
// aaa
// Sample Output 1 :
// 6
// 3
#include <vector>
bool count(vector<int> &arr, int k) {
  int c = 0;
  for (int i = 0; i < 26; i++) {
    if (arr[i] > 0) {
      c++;
    }
  }

  if (c > k) {
    return false;
  }
  return true;
}

bool isPossible(int k, string s, int m) {
  vector<int> arr(26, 0);
  // int count=0;
  int st = 0;
  int i;
  for (i = 0; i < m; i++) {
    arr[s[i] - 'a']++;
  }
  if (count(arr, k) == true) {
    return true;
  }
  for (; i < s.size(); i++) {
    arr[s[i] - 'a']++;
    arr[s[st++] - 'a']--;

    if (count(arr, k) == true) {
      return true;
    }
  }
  return false;
}

int getLengthofLongestSubstring(int k, string s) {
  int st = 0;
  int e = s.size();
  int ans = -1;

  while (st <= e) {
    int m = st + (e - st) / 2;
    if (isPossible(k, s, m) == true) {
      ans = m;
      st = m + 1;
    } else {
      e = m - 1;
    }
  }
  return ans;
}
