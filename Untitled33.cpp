#include <iostream>
using namespace std;
 
int main() {
 	
	for(double i=0, j=1; i<=2; i+=0.2)
	{
		cout << "I=" << i << " J=" << j+i << endl;
		cout << "I=" << i << " J=" << j+1+i << endl;
		cout << "I=" << i << " J=" << j+2+i << endl;
	}
    return 0;
}
