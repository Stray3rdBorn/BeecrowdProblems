#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double R, volume, pi=3.14159;
    cin >> R;
    volume = (4.0/3)*pi*R*R*R;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
