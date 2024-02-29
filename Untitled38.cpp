#include <iostream>
using namespace std;
 
int main() {
 
    int n, x, sum; 
    while(1)
    {
    	cin >> x;
    	if(x==0) break;
    	sum = 0;
    	if(x%2!=0) x++;
    	for(int j=0; j<5; j++)
    	{
    		sum += x;
    		x += 2;
		}
		cout << sum << endl;
	}
    return 0;
}
