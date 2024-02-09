#include <iostream>

using namespace std;

int main() {
    int rozmiar = 10;
    double tablica[rozmiar];
    double suma = 0.0;

   
    cout << "Podaj 10 liczb rzeczywistych:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
        suma += tablica[i]; 
    }

    
    cout << "Suma wszystkich elementów tablicy: " << suma << endl;

    return 0;
}
