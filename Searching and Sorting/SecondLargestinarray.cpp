// You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
// Sample Input 1:
// 5
// 4 3 10 9 2
// Sample Output 1:
// 9
#include <bits/stdc++.h>

int findSecondLargest(int *input, int n)
{
   int i, first, second,max=-2147483648;
    /* There should be atleast two elements */
    if (n < 2) {
        
        return max;
    }
    // sort the array
    sort(input, input+n);
    // start from second last element as the largest element
    // is at last
    for (i = n - 2; i >= 0; i--) {
        // if the element is not equal to largest element
        if (input[i] != input[n - 1]) {

            return input[i];
        }
    }
   return max;
}
