#include <iostream>
using namespace std;
int main() {
   
    int rok;
    cout << "Podaj rok: ";
    cin >> rok;

   
    if ((rok % 4 == 0 and rok % 100 != 0) or (rok % 400 == 0)) {
        cout << rok << " to rok przestępny." << endl;
    } else {
        cout << rok << " nie jest rokiem przestępnym." << endl;
    }

    return 0;
}
