#include <iostream>
using namespace std;
 
int main() {
 
    int i, j, x, n,k = 0;
    cin >> n;
    for(i = 0;i < n;i++)
	{
        cin >> x;
        if(x==1 || x==2)cout << x << " eh primo" << endl;
        else if (x > 2)
		{
			for(j = 2;j < x;j++)
			{
            	if(x%j == 0)
				{
            		k = 2;
            		break;
            	}
            	else k = 1;
    		}
       		if(k == 2)cout << x << " nao eh primo" << endl;
       		else if(k == 1)cout << x << " eh primo" << endl;
    	}
    }
    return 0;
}
