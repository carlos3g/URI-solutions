#include <iostream>
#include <string>

using namespace std;

int main() {
    string estado;
    int ddd;

    cin >> ddd;
    if (ddd == 61) {
        estado = "Brasilia\n";
    } else if (ddd == 71) {
        estado = "Salvador\n";
    } else if (ddd == 11) {
        estado = "Sao Paulo\n";
    } else if (ddd == 21) {
        estado = "Rio de Janeiro\n";
    } else if (ddd == 32) {
        estado = "Juiz de Fora\n";
    } else if (ddd == 19) {
        estado = "Campinas\n";
    } else if (ddd == 27) {
        estado = "Vitoria\n";
    } else if (ddd == 31) {
        estado = "Belo Horizonte\n";
    } else {
        estado = "DDD nao cadastrado\n";
    }

    cout << estado;
    return 0;
}