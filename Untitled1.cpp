#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, avg;
    cin >> A;
    cin >> B;
    avg = (A*3.5+B*7.5)/11;
    cout  << "MEDIA = " << fixed << setprecision(5) << avg << endl;
 
    return 0;
}
