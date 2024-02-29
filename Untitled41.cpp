#include <iostream>
using namespace std;
 
int main() {
 
	int t, pa, pb, years;
	double ra, rb;
	cin >> t;
	for(int i=1; i<=t; i++)
	{
		cin >> pa >> pb >> ra >> rb;
		years = 0;
		while(pa <= pb)
		{
			pa = pa + ((pa*ra)/100);
			pb = pb + ((pb*rb)/100);
			years++;
			if(years>100)
			{
				cout << "Mais de 1 seculo." << endl;
				break;
			}
		}
		if(years<=100) cout << years << " anos." << endl;
	}
    return 0;
}
