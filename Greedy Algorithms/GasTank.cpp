// You have a car with a gas tank of infinite capacity. There are ‘N’ gas stations along a circular route. Gas stations are numbered from 0 to N - 1. You begin the journey with an empty tank at one of the gas stations. You want to travel around the circular route once in the clockwise direction. I.e if you start to travel from station ‘i’, then you will go to i + 1, i + 2, …, n - 1, 0, 1, 2, i - 1 and then return back to ‘i’.
// You are given two integer arrays ‘gas’ and ‘cost’. ‘gas[i]’ gives the amount of gas available at station ‘i’ and cost[i] gives the amount of gas required to travel from station ‘i’ to next station i.e station ‘i’+1 (or 0 if the station is N - 1).
// Return the starting gas station's index if it is possible to complete cycle of given circular route once in the clockwise direction. If there are multiple possible starting gas station’s indexes, then return the minimum of those gas station indexes. If there is no such gas station then return -1.
// Sample Input 1 :-
// 1
// 2
// 1 2
// 2 1
// Sample Output 1:
// 1
int minimumStartingIndex(vector<int> &gas, vector<int> &cost, int n) 
{
    // Write your code here.
    int start = 0;
    int curr_gas = 0, total_gas = 0;
    for (int i = 0; i < n; i++) {
      curr_gas += gas[i] - cost[i];
      // add up all of the left side gas to total.
      // If it's negative finally, return -1 since it's impossible to return the
      // starting gas station's index.
      total_gas += gas[i] - cost[i];
      // if the current gas sum is negative, reset it and let the car start from
      // next point.
      if (curr_gas < 0) {
        start = i + 1;
        curr_gas = 0;
      }
    }
    if (total_gas >= 0)
      return start;
    else
      return -1;
}
