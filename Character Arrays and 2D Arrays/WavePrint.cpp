For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.
Sample Input 1:
1
3 4 
1  2  3  4 
5  6  7  8 
9 10 11 12
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4

void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
int i,j=0;    //i - iteration through the rows and j - iteration through columns
    while(j<mCols){
        if(j%2==0){     //for even values of j like 0,2,4...
            for(i=0;i<nRows;i++){
                cout<<input[i][j]<<" ";
                if(i==(nRows-1)){
                    break;    //to come out of the loop and increment j
                }
            }
            j++;
        }else{      //for odd values of j like 1,3,5...
            for(i=(nRows-1);i>=0;i--){
                cout<<input[i][j]<<" ";
                if(i==0){
                    break;
                }
            }
            j++;
        }
    }
}
