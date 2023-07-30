// You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// Sample Input 1 :
// 5
// 9
// 8
// 4
// 5
// 6
// Sample Output 1 :
// true
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int s,current,previous,n;
    cin>>n;
    cin>>previous;
    s=2;
    bool isDec=true;
    while(s<=n){
        //int current;
        // current==n;
        cin>>current;
        if(current==previous){
            cout<<"false"<<endl;
            return 0;
        }
        if(current < previous){
            if(isDec==false){
                cout<<"false"<<endl;
                return 0;
            }
        }
        else{
            if(isDec==true){
                isDec=false;
            }
        }
         previous=current;
        s++;
    }
    cout<<"true"<<endl;
}
