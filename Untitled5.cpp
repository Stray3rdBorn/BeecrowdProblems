#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    double A,B,C, triang, circle, trap, square, rect;
    cin >> A >> B >> C;
    triang = (A/2)*C;
    circle = 3.14159*C*C;
    trap = (C/2)*(A+B);
    square = B*B;
    rect = A*B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triang << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trap << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rect << endl;
    return 0;
}
