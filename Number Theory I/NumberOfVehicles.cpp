
#include <bits/stdc++.h> 
int numberOfVehicles(int districtCount, char alpha1, char alpha2, char alpha3, char alpha4, int dig1, int dig2, int dig3, int dig4) {
	// Write your code here.
	int ans=1;

ans=districtCount*(dig1+1)*(dig2+1)*(dig3+1)*(dig4+1);

int c1=(alpha2-'A')-(alpha1-'A')+1;

int c2=(alpha4-'A')-(alpha3-'A')+1;

return c1*ans*c2;
}
