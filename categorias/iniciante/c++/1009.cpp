#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    double salario, vendas, total;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> nome;
    cin >> salario;
    cin >> vendas;
    total = salario + (vendas * 0.15);

    cout << "TOTAL = R$ " << total << "\n";
    return 0;
}