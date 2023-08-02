// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Insertion Sort' recursively.
// Sample Input 1:
// 5
// 9 3 6 2 0
// Sample Output 1:
// 0 2 3 6 9
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}


void insertionSort(int *input, int size)
{
    int i,j,x;
for(i=1;i<size;i++)
{
j=i-1;
x=input[i];
while(j>-1 && input[j]>x)
{
input[j+1]=input[j];
j--;
}
input[j+1]=x;
}
}
