// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Bubble Sort'.
// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}

void bubbleSort(int *input, int size)
{
    int i,j,flag=0;
    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(input[j]>input[j+1])
            {
                swap(&input[j],&input[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
