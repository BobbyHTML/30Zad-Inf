#include <iostream>

using namespace std;

int main() {
    int liczba;
    bool pierwsza = true;

    
    cout << "Podaj liczbę naturalną: ";
    cin >> liczba;

    if (liczba <= 1) {
        cout << liczba << " nie jest liczbą pierwszą." << endl;
       
    }

    for (int i = 2; i < liczba; ++i) {
        if (liczba % i == 0) {
            pierwsza = false;
            
        }
    }

    if (pierwsza) {
        cout << liczba << " jest liczbą pierwszą." << endl;
    } else {
        cout << liczba << " nie jest liczbą pierwszą." << endl;
    }

    
}
