
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r;
    cout << "podaj promien kola: ";
    cin >> r;
    
    float pi = M_PI;
    
    
    float pole = pi*(r*r);
    float obw = 2*pi*r;
   
   if(r > 0){
    cout << pole << endl;
    cout << obw;  
   }
   else{
       cout << "niepoprawny promien";
   } 
    
    
    
}
