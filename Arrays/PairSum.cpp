// You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
// Sample Input 1:
// 1
// 9
// 1 3 6 2 5 4 3 2 4
// 7
// Sample Output 1:
// 7

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int p=0,i,j,k;
    for(i=0;i<size;i++)
    {
        k=input[i];
        for(j=i+1;j<size;j++)
        {
            if(k+input[j]==x)
                p++;
        }
    }
    return p;
}
