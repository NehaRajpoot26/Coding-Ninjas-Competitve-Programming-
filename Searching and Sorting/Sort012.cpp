// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Sample Input 1:
// 1
// 7
// 0 1 2 0 2 0 1
// Sample Output 1:
// 0 0 0 1 1 2 2 
oid sort012(int *arr, int n)
{
    int k=-1,a[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {k++;
        a[k]=0;
    }
    }
     for(int i=0;i<n;i++)
    {
        if(arr[i]==1){
            k++;
       a[k]=1;
    }
     }
     for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            k++;
            a[k]=2;
    }
}
    
     for(int i=0;i<n;i++)
    {
         arr[i]=a[i];
     }
}
