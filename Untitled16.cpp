#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double n1, n2, n3, n4, avg, exscre, reavg;
    cin >> n1 >> n2 >> n3 >> n4;
    avg = (n1*2+n2*3+n3*4+n4*1)/10;
    cout << "Media: " << fixed << setprecision(1) << avg << endl;
    if(avg >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if(avg < 5.0)
        cout << "Aluno reprovado." << endl;
    else if(avg >= 5.0 && avg <= 6.9)
    {
    	cout << "Aluno em exame." << endl;
    	if(avg >= 5.0 && avg <= 6.9)
    	{
        	cin >> exscre;
        	cout << "Nota do exame: " << fixed << setprecision(1) <<  exscre << endl;
    	}
    	reavg = (avg+exscre)/2;
    	if(reavg >= 5.0)
    	{
    		cout << "Aluno aprovado." << endl;
    		cout << "Media final: " << fixed << setprecision(1) << reavg << endl;
		}	
    	else if(reavg <= 4.9)
    	{
    		cout << "Aluno reprovado." << endl;
    		cout << "Media final: " << fixed << setprecision(1) << reavg << endl;
		} 		
	}    
    return 0;
}
