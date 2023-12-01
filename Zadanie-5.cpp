#include <iostream>
using namespace std;
int main() {
   
    int liczba;
    int wynik = 1;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    
    if(liczba < 0){
        cout << "No chyba nie";
    }
    else if(liczba == 0){
        cout << "1";
    }
    else{
        for (int i = 1; i <= liczba; ++i) {
        wynik *= i;
    }
    cout << wynik;
    }

}
