#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, x, i=0;
    cin >> n;
    while(i<n)
    {
        cin >> x;
        if(x==0)
            cout << "NULL" << endl;
        else
        {
            if(x%2==0)
                cout << "EVEN ";
            else
                cout << "ODD ";
            
            if(x>0)
                cout << "POSITIVE" << endl;
            else
                cout << "NEGATIVE" << endl;
        }
        i++;
    }
 
    return 0;
}
