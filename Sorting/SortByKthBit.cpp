// You are given an array/list ‘ARR’ of ‘N’ positive integers and an integer ‘K’. Your task is to group all the array elements with ‘K-th’ bit (rightmost bit is ‘1st’ bit) equal to 0 followed by all the elements with ‘K-th’ bit equal to 1.
// Note 1: The relative order inside both the groups should remain as it was in the input.
// Note 2: You have to return the modified array/list..
// Sample Input 1:
// 2
// 4 1
// 4 3 2 1
// 5 2
// 2 5 1 6 7
// Sample Output 1:
// 4 2 3 1
// 5 1 2 6 7
vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
  int K = 1 << (k - 1);
  int l = 0, prev = -1, r = 0;

  while (r < n) {
    if (!(K & arr[r])) {
      int p = r;
      while (p > l) {
        swap(arr[p], arr[p - 1]);
        p--;
      }
      l++;
    }
    r++;
  }
  return arr;
}
