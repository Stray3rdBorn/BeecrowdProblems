#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int x[100], i; 
	double v;
	cin >> v;
	for(i=0; i<100; i++)
	{
		cout << "N[" << i << "] = " << fixed << setprecision(4) <<  v << endl;
		v /= 2;;
	}
    return 0;
}
