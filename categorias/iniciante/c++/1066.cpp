#include <iostream>

using namespace std;

int main() {
    int positivos=0, negativos=0, pares=0, impares=0;
    int Ns[5], i;

    for (i=0;i<5;i++) {
        cin >> Ns[i];
    }
    for (i=0;i<5;i++) {
        if (Ns[i] > 0) {
            positivos += 1;
        } else if (Ns[i] < 0) {
            negativos += 1;
        }
        if (Ns[i] % 2 == 0) {
            pares += 1;
        } else {
            impares += 1;
        }
    }

    cout << pares << " valor(es) par(es)\n";
    cout << impares << " valor(es) impar(es)\n";
    cout << positivos << " valor(es) positivo(s)\n";
    cout << negativos << " valor(es) negativo(s)\n";
    return 0;
}