#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, tmp;

    cin >> a >> b >> c;

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b < c) {
        tmp = c;
        c = b;
        b = tmp;
    }
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a >= b+c) {
        cout << "NAO FORMA TRIANGULO\n";
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO RETANGULO\n";
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO ACUTANGULO\n";
        }
        if (a==b && b==c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (
            a==b ||
            b==c ||
            a==c
        ) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}