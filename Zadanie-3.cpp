
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string imie;
   cout << "podaj imie: ";
   cin >> imie;
   
   int wiek;
   cout << "Podaj wiek: ";
   cin >> wiek;
   
   int dzialanie = 2023 - wiek;
   
   cout << imie << " urodzil sie w " << dzialanie << endl;
    
}
