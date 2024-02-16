#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand(time(nullptr));
    
    int tablica [5][4];
    
    for (int i = 0; i < 5; ++i){
        for(int j = 0; j < 4; ++j){
            tablica[i][j] = rand() % 100;
        }
    }
    
      for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 4; ++j){
           cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
    
    int suma = 0;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 4; ++j){
            if(tablica[i][j] % 2 == 0){
                suma += tablica[5][4];
            }
        }
    }
    cout << endl;
    cout << "Suma tablicy to: " << suma ;
}
