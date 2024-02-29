#include <iostream>
 
using namespace std;
 
int main() {
 
    int m, n, temp;
    while(1)
    {
    	cin >> m >> n;
    	if(m<=0)
    		break;
    	if(n<=0)
    		break;
    	
    	if(m>n)
    	{
    		temp = m;
    		m = n;
    		n = temp;
		}
		int sum = 0;
		for(int i=m; i<=n; i++)
		{
			cout << i << " ";
			sum = sum+i;
		}
		cout << "Sum=" << sum << endl;
	}
 
    return 0;
}
