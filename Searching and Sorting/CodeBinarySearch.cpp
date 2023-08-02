// You are given an integer array 'A' of size 'N', sorted in ascending order. You are also given an integer 'target'.
// Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. Otherwise, return -1.
// Sample Input 1:
// 7
// 1 3 7 9 11 12 45
// 3
// Sample Output 1:
// 1
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int l=0,h=n-1;
    int mid=(l+h)/2;
    if(val==input[mid])
        return mid;
    if(val>input[mid])
    {
        for(int i=mid+1;i<=h;i++){
            if(val==input[i])
                return i;
        }
    }
        else if(val<input[mid])
        {
           for(int i=0;i<mid;i++){
            if(val==input[i])
                return i;
        } 
        }
    return -1;
}
