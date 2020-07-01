#include <iostream>

using namespace std;

int main() {
    double n1, n2, n3;
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n1 >> n2 >> n3;
    if (
        (n1 + n2) > n3 &&
        (n2 + n3) > n1 &&
        (n3 + n1) > n2
    ) {
        cout << "Perimetro = " << n1 + n2 + n3 << "\n";
    } else {
        cout << "Area = " << ((n1+n2)*n3)/2 << "\n";
    }

    return 0;
}