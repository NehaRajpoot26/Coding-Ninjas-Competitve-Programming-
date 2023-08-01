// You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7 
// 12
// Sample Output 1:
// 5

int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int p=0,i,j,k,l,j1;
    for(i=0;i<size;i++)
    {
        k=input[i];
        for(j=i+1;j<size;j++)
        {
            l=input[j];
            for(j1=j+1;j1<size;j1++)
        {
            if(k+l+input[j1]==x)
                p++;
        }
    }
    }
    return p;
}
