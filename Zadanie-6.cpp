#include <iostream>
using namespace std;
int main() {
   
    int a, b, c;
    
    cout << "Podaj 1 liczbe: ";
    cin >> a;
    
    cout << "Podaj 2 liczbe: ";
    cin >> b;
    
    cout << "Podaj 3 liczbe: ";
    cin >> c;
     
    if(a>b and a>c){
        cout << a;
    } 
    else if(b>a and b>c){
        cout << b;
    }
    else if(c>a and c>b){
        cout << c;
    }

}
