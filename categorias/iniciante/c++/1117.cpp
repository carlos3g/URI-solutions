#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> n1;
    while (0 > n1 || n1 > 10) {
        cout << "nota invalida\n";
        cin >> n1;
    }
    cin >> n2;
    while (0 > n2 || n2 > 10) {
        cout << "nota invalida\n";
        cin >> n2;
    }

    cout << "media = " << (n1+n2)/2 << "\n";
    return 0;
}