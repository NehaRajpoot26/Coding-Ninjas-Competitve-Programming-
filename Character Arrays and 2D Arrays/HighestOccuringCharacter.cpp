For a given a string(str), find and return the highest occurring character.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b

char highestOccurringChar(char input[]) {
    // Write your code here
    int fre[256];
    for(int i=0;i<256;++i)
    {
        fre[i]=0;
    }
    for(int i=0;input[i]!='\0';i++)
    {
        ++fre[input[i]];
    }
    int max=0;
    int maxInd=-1;
    for(int i=0;i<256;i++)
    {
        if(fre[i]>max){ 
            max=fre[i];
        maxInd=i;
    }
    }
return char(maxInd);
}
