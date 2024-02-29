#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double slry, newslry, incre;
    cin >> slry;
    if(slry >= 0 && slry <= 400.00)
    {
    	incre = slry*0.15;
    	newslry = slry+incre;
    	cout << "Novo salario: " << fixed << setprecision(2) << newslry << endl;
    	cout << "Reajuste ganho: " << fixed << setprecision(2) << incre << endl;
    	cout << "Em percentual: 15 %" << endl;
	}
	else if(slry >= 400.01 && slry <= 800.00)
    {
    	incre = slry*0.12;
    	newslry = slry+incre;
    	cout << "Novo salario: " << fixed << setprecision(2) << newslry << endl;
    	cout << "Reajuste ganho: " << fixed << setprecision(2) << incre << endl;
    	cout << "Em percentual: 12 %" << endl;
	}
	else if(slry >= 800.01 && slry <= 1200.00)
    {
    	incre = slry*0.10;
    	newslry = slry+incre;
    	cout << "Novo salario: " << fixed << setprecision(2) << newslry << endl;
    	cout << "Reajuste ganho: " << fixed << setprecision(2) << incre << endl;
    	cout << "Em percentual: 10 %" << endl;
	}
	else if(slry >= 1200.01 && slry <= 2000.00)
    {
    	incre = slry*0.07;
    	newslry = slry+incre;
    	cout << "Novo salario: " << fixed << setprecision(2) << newslry << endl;
    	cout << "Reajuste ganho: " << fixed << setprecision(2) << incre << endl;
    	cout << "Em percentual: 7 %" << endl;
	}
	else if(slry > 2000.00)
    {
    	incre = slry*0.04;
    	newslry = slry+incre;
    	cout << "Novo salario: " << fixed << setprecision(2) << newslry << endl;
    	cout << "Reajuste ganho: " << fixed << setprecision(2) << incre << endl;
    	cout << "Em percentual: 4 %" << endl;
	}
    return 0;
}
