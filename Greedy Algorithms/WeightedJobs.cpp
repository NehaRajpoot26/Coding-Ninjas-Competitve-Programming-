// You are given N jobs where every job is represented as:
// 1. Start Time
// 2. Finish Time
// 3. Profit Associated
// Find the maximum profit subset of jobs such that no two jobs in the subset overlap.
// Sample Input 1
// 4
// 3 10 20
// 1 2 50
// 6 19 100
// 2 100 200
// Sample Output 1
// 250
#include<bits/stdc++.h>
using namespace std;

    
    // write your code here
    struct Job
    {
        int s,f,p;
    };
    bool m(Job s1, Job s2)
    {
        return(s1.f<s2.f);
    }
int bs(Job jobs[],int i)
{
    int l=0,h=i-1;
    while(l<=h)
    
    {
        int mid=(l+h)/2;
        if(jobs[mid].f<=jobs[i].s)
        {
            if(jobs[mid+1].f<=jobs[i].s)
            l=mid+1;
            else 
            return mid;
        }
        else
        h=mid-1;
    }
    return -1;
}
int fmp(Job arr[],int n)
{
    sort(arr,arr+n,m);
    int *t=new int[n];
    t[0]=arr[0].p;
    for(int i=1;i<n;i++)
    {
        int icf=arr[i].p;
        int l1=bs(arr,i);
        if(l1!=-1)
        icf+=t[l1];

        t[i]=max(icf,t[i-1]);

    }
    int r=t[n-1];
    delete[]t;
    return r;
}
int main()
{
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].s>>arr[i].f>>arr[i].p;
    }
    cout<<fmp(arr,n);

        return 0;
}
