// You have been given an array 'ARR' of 'N' distinct elements.
// Your task is to find the minimum no. of swaps required to sort the array.
// For example:
// For the given input array [4, 3, 2, 1], the minimum no. of swaps required to sort the array is 2, i.e. swap index 0 with 3 and 1 with 2 to form the sorted array [1, 2, 3, 4].
// Sample Input 1:
// 2
// 4
// 4 3 2 1
// 5
// 1 5 4 3 2
// Sample Output 1:
// 2
// 2
int minSwaps(vector<int> &arr)
{
  vector<pair<int, int>> v;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    v.push_back({arr[i], i});
  }
  sort(v.begin(), v.end());
  int swaps = 0;
  for (int i = 0; i < n; i++) {
    if (v[i].second == i)
      continue;
    else {
      swaps++;
      swap(v[i], v[v[i].second]);
      i--;
    }
  }
  return swaps;
}
