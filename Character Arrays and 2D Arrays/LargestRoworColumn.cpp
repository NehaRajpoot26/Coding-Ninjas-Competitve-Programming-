For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
char ans='r';
    int c=0;
   	int maxx=-2147483648;
    for(int i=0;i<nRows;i++){
        int sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum+=input[i][j];
        }
        if(sum>maxx){
            maxx=sum;
            c=i;
            ans='r';
     	}
    }


  for(int i=0;i<mCols;i++){
            int sum=0;
            for(int j=0;j<nRows;j++){
                sum+=input[j][i];
            }
            if(sum>maxx){
                maxx=sum;
                c=i;
                ans='c';
            }
    }

    if(ans=='r')
        cout<<"row"<<" "<<c<<" "<<maxx;
    else if(ans=='c')
        cout<<"column"<<" "<<c<<" "<<maxx;

}
