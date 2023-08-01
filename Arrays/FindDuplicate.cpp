// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
// Sample Input 1:
// 1
// 9
// 0 7 2 5 4 7 1 3 6
// Sample Output 1:
// 7

int duplicateNumber(int *arr, int size)
{
    int i,j;
    for(int i=0;i<size;i++){ 
        int k=arr[i];
    for(j=i+1;j<size;j++)
    {
        if(k==arr[j])
            return k;
    }
    }
}
