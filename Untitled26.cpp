#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
	double x, sum=0;
	int pos=0;
	for(int i=1; i<=6; i++)
	{
		cin >> x;
		if(x>0)
		{
			sum = sum+x;
			pos++;
		}
	}
	double avg = sum/pos;
	cout << pos << " valores positivos" << endl;
	cout << fixed << setprecision(1) << avg << endl;
    return 0;
}
