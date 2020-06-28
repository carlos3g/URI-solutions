#include <iostream>

using namespace std;

int main() {
    int horas, vm;
    double litros;
    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> horas;
    cin >> vm;
    litros = (horas*vm)/12.0;

    cout << litros << "\n";
    return 0;
}