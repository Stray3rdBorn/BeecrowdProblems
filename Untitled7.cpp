#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int ttime, avgspeed;
    double liters;
    cin >> ttime >> avgspeed;
    liters = (ttime*avgspeed)/12.0;
    cout << fixed << setprecision(3) << liters << endl;
    return 0;
}
