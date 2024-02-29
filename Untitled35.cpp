#include <iostream>
using namespace std;
 
int main() {
 
	int x, y, n, j=0, in=0, gr=0, em=0;
	while(1)
	{
		cin >> x >> y;
		if(x>y)
			in++;
		else if(y>x)
			gr++;
		else if(x==y)
			em++;
		j++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
		if(n==1) continue;
		else break;
	}
	cout << j << " grenais" << endl;
	cout << "Inter:" << in << endl;
	cout << "Gremio:" << gr << endl;
	cout << "Empates:" << em << endl;
	if(in==gr)
		cout << "Não houve vencedor" << endl;
	else if(in>gr)
		cout << "Inter venceu mais" << endl;
	else
		cout << "Gremio venceu mais" << endl;
    return 0;
}
