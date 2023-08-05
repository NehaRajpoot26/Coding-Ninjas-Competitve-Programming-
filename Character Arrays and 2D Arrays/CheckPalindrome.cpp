// Given a string, determine if it is a palindrome, considering only alphanumeric characters.
// Palindrome
// A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true 
bool checkPalindrome(char str[]) {
    bool g = true;
bool h = false;
    int c=0,i,j,c1=1;
    for(i=0;str[i]!='\0';i++){
        c++;
       }
    if(c==1)
    {
         return  g;
    }
     else{
    for(i=0,j=c-1;i<j;i++,j--){
        
       if(str[i]==str[j])
        continue;
        else{
            c1=0;
         break;}
    }
        if(c1==0)
          return  h;
        else
            return g;

     }
   
           
       return   h;
        
}
