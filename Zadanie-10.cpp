#include <iostream>
#include <string>

using namespace std;

int main() {
    const int rozmiar = 10;
    string imiona[rozmiar];

    
    cout << "Podaj 10 kobiecych imion:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Imię " << i + 1 << ": ";
        cin >> imiona[i];
    }

    
    cout << "Imiona w odwrotnej kolejności:" << endl;
    for (int i = rozmiar - 1; i >= 0; --i) {
        cout << imiona[i] << endl;
    }

    return 0;
}
