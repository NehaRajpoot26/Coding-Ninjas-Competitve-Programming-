// Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.
// You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
// Sample Input 1:
// 1
// 3
// 6 2 4
// 3
// 7 5 6
// Sample Output 1:
// 1 3 8 0
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i,j,k,p,carry=0;
    if(size1>size2){ 
        p=size1+1;}
    else if(size1==size2)
        p=size1+1;
    else{ 
        p=size2+1;
    }
    if(size1==0){
        for(i=0;i<p;i++){ 
        if(i==0)
    output[0]=0;
        else
        output[i]=input2[i-1];   
    }      
}
   else if(size2==0){ 
    for(i=0;i<p;i++){ 
        if(i==0)
    output[0]=0;
        else
        output[i]=input1[i-1];
    }
      
}
    else{
        
            
     for(i=size1-1,j=size2-1;i>=0 || j>=0;i--,j--)
    {
         if(j!=-1){ 
     k=input1[i]+input2[j]+carry;}
         else{ 
             k=input1[i]+carry;}
         
            output[--p]=k%10;
         if(k>=10){ 
             carry=k/10;}

     }
      output[0]=carry;
    }
    
}
