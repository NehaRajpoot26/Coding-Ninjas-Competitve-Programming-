// You have been given an array/list(ARR) of size N. You must swap every alternate element pair in the array/list.
// You don't need to print or return anything, just change the input array itself.
// Sample Input 1:
// 1
// 6
// 9 3 6 12 4 32
// Sample Output 1 :
// 3 9 12 6 32 4

void swapAlternate(int *arr, int size)
{
    int i=0;
    if(size%2==0)
    { 
 while(i<size){ 
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;  
    i+=2;
    }
    }else { 
         while(i<size-2){ 
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;  
    i+=2;
        
         }
    arr[i+1]=arr[size-1];
    }
}
