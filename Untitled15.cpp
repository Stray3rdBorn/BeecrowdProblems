#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double A, B, C, Per, Ar;
    cin >> A >> B >> C;
    Per=A+B+C;
    Ar=0.5*(A+B)*C;
    
    if((A+B)>C && (A+C)>B && (B+C)>A)
    	cout << "Perimetro = " << fixed << setprecision(1) << Per << endl;
    else
    	cout << "Area = " << fixed << setprecision(1) << Ar << endl;
 
    return 0;
}
