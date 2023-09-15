// Given a sequence of ‘N’ space-separated non-negative integers A[1],A[2],A[3],......A[i]…...A[n]. Where each number of the sequence represents the height of the line drawn at point 'i'. Hence on the cartesian plane, each line is drawn from coordinate ('i',0) to coordinate ('i', 'A[i]'), here ‘i’ ranges from 1 to ‘N’. Find two lines, which, together with the x-axis forms a container, such that the container contains the most area of water.
 
// For the above Diagram, the first red marked line is formed between coordinates (2,0) and (2,10), 
// Sample Input 1 :-
// 2
// 5
// 4 3 2 1 4
// 3
// 1 2 1
// Sample Output 1 :
// 16
// 2 

int maxArea(vector<int> &height) {
  // Write your code here.
  int start = 0;
  int end = height.size() - 1;
  int area = 0;
  int maxArea = 0;

  while (start < end) {
    area = min(height[start], height[end]) * (end - start);
    if (area > maxArea)
      maxArea = area;

    if (min(height[start], height[end]) == height[start])
      start++;
    else
      end--;
  }
  return maxArea;
}
