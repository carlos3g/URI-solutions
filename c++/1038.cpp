#include <iostream>

using namespace std;

int main() {
    int pedido, qtd;
    double total;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> pedido >> qtd;

    if (pedido == 1) {
        total = qtd*4.00;
    } else if (pedido == 2) {
        total = qtd*4.50;
    } else if (pedido == 3) {
        total = qtd*5.00;
    } else if (pedido == 4) {
        total = qtd*2.00;
    } else if (pedido == 5) {
        total = qtd*1.50;
    }

    cout << "Total: R$ " << total << "\n";
    return 0;
}