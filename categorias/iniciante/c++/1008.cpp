#include <iostream>

using namespace std;

int main() {
    int numero, horas;
    double qtdPorHora;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> numero;
    cin >> horas;
    cin >> qtdPorHora;

    cout << "NUMBER = " << numero << "\n";
    cout << "SALARY = U$ " << (double) horas*qtdPorHora << "\n";
    return 0;
}