Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN

#include<algorithm>
void reverseEachWord(char input[]) {
    // Write your code here
    int prev=-1;

    for(int i=0;i<=strlen(input);i++)

    {

        if(input[i]==' '||input[i]=='\0')

        {

            std::reverse(input+prev+1,input+i);

                prev=i;

        }

    }
}
