#include <iostream>

using namespace std;

int main() {
    double salario, imposto=0;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> salario;
    if (salario>4500.00) {
        imposto += ((salario-4500.00)*28)/100;
    }
    if (salario>3000.00 and salario>4500.00) {
        imposto += ((4500.00-3000.00)*18)/100;
    }
    else {
        if (salario>3000.00) {
            imposto += ((salario-3000.00)*18)/100;
        }
    }
    if (salario>2000.00 && salario>3000.00) {
        imposto += ((3000.00-2000.00)*8)/100;
    }
    else {
        if (salario>2000.00) {
            imposto += ((salario-2000.00)*8)/100;
        }
    }
    if (imposto==0.00) {
        cout << "Isento\n";
    }
    else {
        cout << "R$ " << imposto << "\n";
    }

    return 0;
}
