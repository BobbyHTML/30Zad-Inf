#include <iostream>

using namespace std;

int main() {
    int N, M;

    
    cout << "Podaj wartość N: ";
    cin >> N;
    cout << "Podaj wartość M: ";
    cin >> M;

    
    if (N <= 0 || M <= 0) {
        cout << "N i M muszą być dodatnie." << endl;
        return 1; 
    }

   
    for (int i = 0; i < N ; ++i) {
        cout<< "*";
        for (int j = 0; j < M; ++j) {

                cout<< "|*";
            
        }
        cout << endl;
    }

    return 0;
}
