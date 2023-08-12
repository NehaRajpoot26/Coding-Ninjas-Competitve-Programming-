// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Sample Input 1:
// 1
// 7
// 0 1 2 0 2 0 1
// Sample Output 1:
// 0 0 0 1 1 2 2 
void sort012(int *arr, int n)
{
    //Write your code here
    int p=0,q=0,r=0,a[n],k=0,i1,i,i2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)p++;
        else if(arr[i]==1)q++;
        else  if(arr[i]==2)r++;
    }
    for (i = 1; i <= p; i++) {
        a[k]=0;
        k++;
    }
    for ( i1 = 1; i1<= q; i1++) {
      a[k] = 1;
      k++;
    }
    for (i2 = 1; i2<= r; i2++) {
      a[k] = 2;
      k++;
    }
    // for (int i = 0; i < n; i++) {
    //   arr[i] = 0;
    // }
      for (int i = 0; i < n; i++) {
        arr[i] = a[i];
      }
}
