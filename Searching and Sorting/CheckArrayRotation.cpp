// You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' (K is greater than 0) in the right hand direction.
// Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.
// Sample Input 1:-
// 1
// 6
// 5 6 1 2 3 4
// Sample Output 1:
// 2
int arrayRotateCheck(int *input, int size)
{
    //Write your code here
     int minidx = 0;
        int minno = input[0];
        for (int i = 1; i <size ; i++){
            if (input[i] < minno){
                minno = input[i];
                minidx = i;
            }
        }
        return minidx;
    
}
