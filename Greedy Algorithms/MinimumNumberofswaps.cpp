// You are given a string ‘S’ of length ‘N’, an array A of length ‘M’ ( consisting of lowercase letters). and a positive integer ‘K’. You can take a character from 'A' and change any character in 'S' with this character. The task is to minimize the number of swaps required ( between ‘S’ and ‘A’ ) to make the string ‘S’ ‘k’-periodic.
// Note:
// 1. A string ‘S’ is said to be ‘K’ periodic, if for each position  ‘i’ in the string S[i] = S[i+K].

//    Consider string ‘S’,
//    if S = ”abcabc”, it is 3 periodic string.
//    if S= ”aaaaa”,  it is 1 periodic string.

// 2. In one move, only one character of ‘S’ can be swapped with a character of ‘A’.

// 3. The characters in ‘A’ can be used more than once.

// 4. All characters of K-periodic string ‘S’ are elements of array ‘A’.
// Sample Input 1:
// 2
// 7 3 3
// abcbbde
// a b c
// 5 2 2
// ninja
// n i
// Sample Output 1:
// 3
// 2
#include <bits/stdc++.h>
int minSwap(int n, int m, int k, string &s, vector<char> &arr) {
  // Write your code here.
  map<char, int> al;
  for (char ch : arr)
    al[ch]++;
  int i = 0, c = 0;
  while (i < k) {
    map<char, int> me;
    int cn = 0;
    int mx = 0;
    for (int j = i; j < n; j += k) {
      cn++;
      if (al.find(s[j]) != al.end()) {
        me[s[j]]++;
        mx = max(mx, me[s[j]]);
      }
    }
    c += cn - mx;
    i++;
  }
  return c;
}
