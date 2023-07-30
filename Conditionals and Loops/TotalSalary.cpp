// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// Sample Input 1 :
// 10000 A
// Sample Output 1 :
// 17600

#include <bits/stdc++.h>
using namespace std;

int main() {
  int b, a, d1;
  cin >> b;
  char c;
  cin >> c;
  if (c == 'A')
    a = 1700;
  else if (c == 'B')
    a = 1500;
  else
    a = 1300;
  double hra, da, pf,d;
  hra = 0.2 * b;
  da = 0.5 * b;
  pf = 0.11 * b;
  d=(hra + b + da + a) - pf ;
  d1=round(d);
  cout << d1 << endl;
}
