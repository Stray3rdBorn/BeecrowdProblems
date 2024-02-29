#include <iostream>
using namespace std;
 
int main() {
	
	string srg;
	int sday, shrs, smin, ssecs, eday, ehrs, emin, esecs;
	cin >> srg >> sday;
	cin >> shrs >> srg >> smin >> srg >> ssecs;
	cin >> srg >> eday;
	cin >> ehrs >> srg >> emin >> srg >> esecs;
	
	sday = eday-sday;
	shrs = ehrs-shrs;
	smin = emin-smin;
	ssecs = esecs-ssecs;
	
	if(ssecs<0)
	{
		ssecs+=60;
		smin--;
	}
	if(smin<0)
	{
		smin+=60;
		shrs--;
	}
	if(shrs<0)
	{
		shrs+=24;
		sday--;
	}
	cout << sday << " dia(s)" << endl;
    cout << shrs << " hora(s)" << endl;
    cout << smin << " minuto(s)" << endl;
	cout << ssecs << " segundo(s)" << endl;
    return 0;
}
