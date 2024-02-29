#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	int l=11, i , j;
	string t;
	double arr[12][12], sum=0.0;
	cin >> t;
	
	for(i=0; i<12; i++)
		for(j=0; j<12; j++)
			cin >> arr[i][j];
			
	for(i=1; i<12; i++)
	{
		for(j=l; j<12; j++)
		{
			sum += arr[i][j]; 
		}
		l--;	
	}
	if(t=="S") cout << fixed << setprecision(1) << sum << endl; 
	else if(t=="M") cout << fixed << setprecision(1) << sum/66.0 << endl; 
    return 0;
}
