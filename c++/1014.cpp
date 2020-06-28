#include <iostream>

using namespace std;

int main() {
    int kms;
    double litros, kmPerL;
    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> kms;
    cin >> litros;
    kmPerL = kms/litros;

    cout << kmPerL << " km/l" << "\n";
    return 0;
}