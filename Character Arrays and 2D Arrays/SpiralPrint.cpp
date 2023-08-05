// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
//  Mind that every element will be printed only once.
// Sample Input 1:
// 1
// 4 4 
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
// Sample Output 1:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int i,k=0,l=0;
        while(k<nRows && k<nCols){ 
            for(i=l;i<nCols;i++)
            {
                cout<<input[k][i]<<" ";
            }
            k++;
             for(i=k;i<nRows;i++)
            {
                cout<<input[i][nCols-1]<<" ";
            }
            nCols--;
            if(k<nRows)
            {
                for(i=nCols-1;i>=l;i--)
            {
                cout<<input[nRows-1][i]<<" ";
            }
                nRows--;
            }
            if(l<nCols)
                for(i=nRows-1;i>=k;i--)
            {
                cout<<input[i][l]<<" ";
            }
                l++;
                
        }

}
