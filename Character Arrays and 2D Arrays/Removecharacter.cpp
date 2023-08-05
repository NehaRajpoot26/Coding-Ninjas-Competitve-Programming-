// For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given string.
// The input string will remain unchanged if the given character(X) doesn't exist in the input string.
// Sample Input 1:
// aabccbaa
// a
// Sample Output 1:
// bccb

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j, n = strlen(input);
    for (int i = j = 0; i < n; i++)
        if (input[i] != c)
            input[j++] = input[i];
 
    input[j] = '\0';
}
