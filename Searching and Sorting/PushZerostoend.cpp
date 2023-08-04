// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
// Sample Input 1:
// 1
// 7
// 2 0 0 1 3 0 0
// Sample Output 1:
// 2 1 3 0 0 0 0
void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int c=0,ip1[size],i,k=0,p=0,j,a;
    for(i=0;i<size;i++){ 
        if(input[i]!=0){
            ip1[k]=input[i];
             k++;
        p++;
        }
    }
    for(j=p;j<size;j++)
    {
ip1[k]=0; 
        k++;
}
      for(i=0;i<size;i++){ 
          input[i]=ip1[i];
      }
}
