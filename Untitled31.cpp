#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int n, amnt, total=0, totalc=0, totalr=0, totals=0;
    string typ;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> amnt >> typ;
        total = total + amnt;
        if(typ=="C")
        	totalc = totalc + amnt;
		if(typ=="R")
        	totalr = totalr + amnt;
		if(typ=="S")
        	totals = totals + amnt;	        
    }
    
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalc << endl;
    cout << "Total de ratos: " << totalr << endl;
    cout << "Total de sapos: " << totals << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((double)totalc/(double)total)*100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((double)totalr/(double)total)*100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((double)totals/(double)total)*100 << " %" << endl;
 
    return 0;
}
