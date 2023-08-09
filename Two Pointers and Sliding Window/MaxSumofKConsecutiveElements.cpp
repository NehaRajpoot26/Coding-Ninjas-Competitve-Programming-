// You are given an array of ‘N’ integers. You have to find the maximum sum over all subarrays of size ‘K’.
// Sample Input 1 :
// 2
// 3 2 
// -100 20 40
// 2 1
// 12 -34
// Sample output 1 :
// 60
// 12
int maxOfK(int n, int k, vector<int> &num)
{
    int max=0;
    // Write your code here.
    for(int i=0;i<k;i++)
    {
int p=num[i]+num[i+1];
if(p>max)
max=p;
    }
return max;
