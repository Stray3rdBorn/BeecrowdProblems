#include <iostream>
using namespace std;
 
int main() {
    
    int n, high=0, posi=0;
    for(int i=1; i<=5; i++)
    {
        cin >> n;
        if(n>high)
        {
            high=n;
            posi=i;
        }
    }
    cout << high << endl << posi << endl;
    return 0;
}
