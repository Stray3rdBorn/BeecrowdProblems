#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
	double x, n, avg, arr[2];
	int j=0;
	while(1)
	{
		while(1)
		{
			cin >> x;
			if(x>=0 && x<=10)
			{
				arr[j]=x;
				j++;	
			}	
			else
				cout << "nota invalida" << endl;
			if(j>1) break;
		}
		avg = (arr[0]+arr[1])/2;
		cout << "media = " << fixed << setprecision(2) << avg << endl;
		j=0;
		while(1)
		{
			cin >> n;
			cout << "novo calculo (1-sim 2-nao)" << endl;
			if(n==1 || n==2) break;
		}
		if(n==1) continue;
		else break;
	}
    return 0;
}
