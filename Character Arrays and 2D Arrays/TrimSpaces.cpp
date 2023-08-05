// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
// There can be multiple spaces present after any word.
// Sample Input :
// abc def g hi
// Sample Output :
// abcdefghi

void trimSpaces(char input[]) {
    // Write your code here
    int i,p=-1;

    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
            continue;
        else
            input[++p]=input[i];
    }
   
     
    input[p+1]='\0';
    
  
}
