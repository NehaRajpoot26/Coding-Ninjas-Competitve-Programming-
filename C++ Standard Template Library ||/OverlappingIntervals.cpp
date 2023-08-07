// You have been given the start and end times of 'N' intervals. Write a function to check if any two intervals overlap with each other.
// Sample Input 1 :
// 1
// 3
// 1 2 3
// 2 3 4
// Sample Output 1 :
// false
#include <bits/stdc++.h>
bool checkOverlappingIntervals(long *start, long *end, int n) {
  vector<pair<long, long>> intervals;
  for (int i = 0; i < n; i++)
    intervals.push_back({start[i], end[i]});
  sort(intervals.begin(), intervals.end());
  for (int i = 1; i < n; i++) {
    if (intervals[i].first < intervals[i - 1].second)
      return true;
  }
  return false;
}

