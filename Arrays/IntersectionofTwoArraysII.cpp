// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// Sample Input 1 :
// 2
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// 2
// 10 10
// 1
// 10
// Sample Output 1 :
// 2 4 3
// 10
void intersection(int *input1, int *input2, int size1, int size2)
{
    int i,j,k;
    for( i=0;i<size1;i++){ 
         k=input1[i];
    for(j=0;j<size2;j++)
    {
        if(k==input2[j])    
        {          
            cout<<k<<" ";
            input2[j]=-1;
            break; 
    }
    }
}
}
