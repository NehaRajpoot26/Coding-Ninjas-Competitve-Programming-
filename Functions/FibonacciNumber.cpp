// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence-
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1
// Sample Input 1 :
// 5
// Sample Output 1 :
// true

bool checkMember(int n){

    if(n==0 || n==1 || n==2)
        return true;
    int a=0,b=1;
    for(int i=2;i<=n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        if(b==n)
            return true;
    }
    return false;
}
