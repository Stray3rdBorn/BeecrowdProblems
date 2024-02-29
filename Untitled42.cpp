#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	int even[5], odd[5], n, b=0, d=0, m, i;
	for(i=0; i<15; i++)
	{
		cin >> n;
		if(n%2==0)
		{
			even[b]=n;
			b++;
			if(b==5)
			{
				for(int m=0; m<5; m++)
				{
					cout << "par[" << m << "] = " << even[m] << endl;
					even[m]=0;
				}
				b=0;
			}	
		}	 
		else
		{
			odd[d]=n;
			d++;
			if(d==5)
			{
				for(int m=0; m<5; m++)
				{
					cout << "impar[" << m << "] = " << odd[m] << endl;
					odd[m]=0;
				}
				d=0;
			}
		}
	}
	for(i=0; i<5; i++)
	{
		if(odd[i]==0) break;
		cout << "impar[" << i << "] = " << odd[i] << endl;
	}
	for(i=0; i<5; i++)
	{
		if(even[i]==0) break;
		cout << "par[" << i << "] = " << even[i] << endl;
	}
    return 0;
}
