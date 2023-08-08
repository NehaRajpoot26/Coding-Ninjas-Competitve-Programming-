// You are given ‘N’ pairs of integers in which the first number is always smaller than the second number i.e in pair (a,b) -> a < b always. Now we define a pair chain as the continuous arrangement of pairs in which a pair (c,d) can follow another pair (a,b) only when b < c.
// Find the length of the longest pair chain that can be formed using the given pairs.
// Sample Input 1:
// 2
// 3
// 5 8 
// 3 4
// 3 4
// 2
// 2 3
// -1 2
// Sample Output 1:
// 2
// 1

#include <bits/stdc++.h>
bool comparator(pair<int, int> p1, pair<int, int> p2) {
  return (p1.second < p2.second);
}
int maxLengthChain(vector<pair<int, int>> &p, int n) {
  // Write your code here.
  if (n == 1)
    return 1;
  sort(p.begin(), p.end(),
       comparator); // to sort according to 1st number in pair
  int count = 0,
      last = INT_MIN; // see the constraints of possible number in pair
  for (int i = 0; i < n; i++) {
    if (last < p[i].first) {
      count++;
      last = p[i].second;
    }
  }
  return count;
}
