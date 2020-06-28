#include <iostream>

using namespace std;

int main() {
    int c1, n1, c2, n2;
    double v1, v2, total;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> c1 >> n1 >> v1;
    cin >> c2 >> n2 >> v2;
    total = (n1 * v1) + (n2 * v2);

    cout << "VALOR A PAGAR: R$ " << total << "\n";
    return 0;
}