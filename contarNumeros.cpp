#include<iostream>
using namespace std;

int main(){
    int numero;
    int contador = 0;

    cin >> numero;

    while (numero != 0) {
        if (numero > 0) {
            contador++;
        }

        cin >> numero;
    }

    cout << contador;
}
