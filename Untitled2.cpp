#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string sellername;
    double fixedsalary, totalsales, TOTAL;
    cin >> sellername >> fixedsalary >> totalsales;
    TOTAL = fixedsalary+(totalsales*0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL << endl;
 
    return 0;
}
