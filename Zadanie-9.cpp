#include <iostream>
#include <string>

using namespace std;

int main() {
    const int rozmiar = 10;
    int liczby[rozmiar];

    cout << "Podaj 10 liczb całkowitych" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Wprowadzone liczby:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    return 0;
}
