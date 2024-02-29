#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int X, Y;
    double c1=4.00, c2=4.50, c3=5.00, c4=2.00, c5=1.50, pay=0;
    cin >> X >> Y;
    
    if(X==1)
        pay=Y*c1;
    else if(X==2)
        pay=Y*c2;
    else if(X==3)
        pay=Y*c3;
    else if(X==4)
        pay=Y*c4;
    else if(X==5)
        pay=Y*c5;
    cout << "Total: R$ " << fixed << setprecision(2) << pay << endl;
    
    return 0;
}
