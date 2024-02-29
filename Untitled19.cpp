#include <iostream>
using namespace std;
 
int main() {
 
    int starthrs, endhrs, startmin, endmin;
    cin >> starthrs >> startmin >> endhrs >> endmin;
    int duration = ((endhrs*60)+endmin)-((starthrs*60)+startmin);
	if(duration <= 0)
		duration += 24*60;
	cout << "O JOGO DUROU " << duration/60 <<" HORA(S) E " << duration%60 << " MINUTO(S)" << endl;
    return 0;
}
