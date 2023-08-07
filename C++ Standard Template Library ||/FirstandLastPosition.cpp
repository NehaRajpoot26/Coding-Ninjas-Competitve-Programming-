// You are given a non-decreasing array 'arr' consisting of 'n' integers and an integer 'x'. You need to find the first and last position of 'x' in the array.

// Sample Input 1:
// 5
// -10 -5 -5 -5 2
// -5
// Sample Output 1:
// 1 3
// Explanation for Sample Input 1:
// The given array’s 0-based indexing is as follows:
// -10    -5    -5    -5     2
//  ↓      ↓     ↓     ↓     ↓
//  0      1     2     3     4

// So, the first occurrence of -5 is at index 1, and the last occurrence of -5 is at index 3.
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
  // Write your code here.
        pair<int, int> p;
        int first_index = -1, last_index = -1;
        for (int i = 0; i < arr.size(); i++) {
          if (arr[i] == x) {
            first_index = i;
            break;
          }
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
          if (arr[i] == x) {
            last_index = i;
            break;
          }
        }
        p.first = first_index;
        p.second = last_index;
        return p;
}
