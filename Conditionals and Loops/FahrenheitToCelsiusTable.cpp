// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
// Sample Input 1:
// 0 
// 100 
// 20
// Sample Output 1:
// 0   -17
// 20  -6
// 40  4
// 60  15
// 80  26
// 100 37
#include <bits/stdc++.h>
using namespace std;
int main()
{
int S,E,W;
    cin>>S>>E>>W;
   
    while(S<=E)
    {
    cout<<S<<" "<<((S-32)*5)/9<<endl;
    S+=W;
    }
}
