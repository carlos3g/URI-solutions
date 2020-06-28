#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double tri, cir, trap, quad, retan;
    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> a >> b >> c;

    tri = (a*c)/2;
    cir = 3.14159 * pow(c, 2);
    trap = ((a+b)*c)/2;
    quad = b*b;
    retan = a*b;

    cout << "TRIANGULO: " << tri << "\n";
    cout << "CIRCULO: " << cir << "\n";
    cout << "TRAPEZIO: " << trap << "\n";
    cout << "QUADRADO: " << quad << "\n";
    cout << "RETANGULO: " << retan << "\n";
    return 0;
}