
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    cout << "Wiek 1: "; 
    cin >> a;
    cout << "Wiek 2: ";
    cin>> b;
    
if(a > b){
    cout << "student 1 jest starszy";
    
}else if(b > a){
    cout << "student 2 jest starszy";
}else if(a == 0 or b==0){
    cout << "liczba nie moze byc rowna 0";
}else{
    cout << "maja tyle samo lat";
    }
}
