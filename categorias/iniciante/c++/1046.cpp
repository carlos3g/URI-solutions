#include <iostream>

using namespace std;

int main() {
    int hi, hf, horas;

    cin >> hi >> hf;
    if (hi == hf) {
        horas = 24;
    } else if (hi < hf) {
        horas = hf - hi;
    } else if (hi > hf) {
        horas = 24 - (hi - hf);
    }

    cout << "O JOGO DUROU " << horas << " HORA(S)\n";
    return 0;
}