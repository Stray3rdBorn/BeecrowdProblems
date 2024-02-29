#include <iostream>
using namespace std;
 
int main() {
 
    double N;
	int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    cin >> N;
    int M = N*100;
	n100 = M/10000;
	n50 = M%10000/5000;
	n20 = M%10000%5000/2000;
	n10 = M%10000%5000%2000/1000;
	n5 = M%10000%5000%2000%1000/500;
	n2 = M%10000%5000%2000%1000%500/200;
	m1 = M%10000%5000%2000%1000%500%200/100;
	m50 = M%10000%5000%2000%1000%500%200%100/50;
	m25 = M%10000%5000%2000%1000%500%200%100%50/25;
	m10 = M%10000%5000%2000%1000%500%200%100%50%25/10;
	m05 = M%10000%5000%2000%1000%500%200%100%50%25%10/5;
	m01 = M%10000%5000%2000%1000%500%200%100%50%25%10%5/1;

	cout << "NOSTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << m1 << " moeda(s) de R$ 1.00" << endl;
	cout << m50 << " moeda(s) de R$ 0.50" << endl;
	cout << m25 << " moeda(s) de R$ 0.25" << endl;
	cout << m10 << " moeda(s) de R$ 0.10" << endl;
	cout << m05 << " moeda(s) de R$ 0.05" << endl;
	cout << m01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
