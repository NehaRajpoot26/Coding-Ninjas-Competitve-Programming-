// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).
// Sample Input :
// abc def4 5$
// Sample Output :
// 6 2 2

#include<iostream>
#include<string>
using namespace std;

int main(){
   char c;
   int alphabet = 0;
   int digit = 0;
   int space = 0;
   c = cin.get();
   while(c!='$'){
       if(c>=97 && c<=122)
          alphabet++;
       else if(c>=48 && c<=57)
           digit++;
       else if(c==9 || c==32||c==10)
           space++;
       c = cin.get();
   }
   cout<<alphabet<<" "<<digit<<" "<<space;
}
