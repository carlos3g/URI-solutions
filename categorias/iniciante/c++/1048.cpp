#include <iostream>

using namespace std;

int main() {
    double salario, novoSalario, ajuste;
    int per;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> salario;
    if (salario <= 400) {
        per = 15;
        ajuste = (per/100.0) * salario;
        novoSalario = salario + ajuste;
    } else if (salario <= 800) {
        per = 12;
        ajuste = (per/100.0) * salario;
        novoSalario = salario + ajuste;
    } else if (salario <= 1200) {
        per = 10;
        ajuste = (per/100.0) * salario;
        novoSalario = salario + ajuste;
    } else if (salario <= 2000) {
        per = 7;
        ajuste = (per/100.0) * salario;
        novoSalario = salario + ajuste;
    } else if (salario > 2000) {
        per = 4;
        ajuste = (per/100.0) * salario;
        novoSalario = salario + ajuste;
    }

    cout << "Novo salario: " << novoSalario << "\n";
    cout << "Reajuste ganho: " << ajuste << "\n";
    cout << "Em percentual: " << per << " %\n";
    return 0;
}