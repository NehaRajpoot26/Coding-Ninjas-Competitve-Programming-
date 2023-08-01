You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2

void arrange(int *arr, int n)
{
    //Write your code here
    int i,j,k1=-1;
    for(i=1;i<=n;i++)
    {
            if(i%2==1){
                k1++;
        arr[k1]=i;
            }
    }
    int  k=n;
     for(j=2;j<=n;j++)
    {
            if(j%2==0){
                k--;
        arr[k]=j;
            }
    }

}
