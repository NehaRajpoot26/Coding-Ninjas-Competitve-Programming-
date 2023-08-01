You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
Sample Input 1:
1
7
2 13 4 1 3 6 28
3
Sample Output 1:
4
int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
            return i;
    }
    return -1;
}
