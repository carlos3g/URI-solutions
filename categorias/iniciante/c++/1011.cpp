#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int raio;
    double volume;
    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> raio;
    volume = (4.0/3) * 3.14159 * pow(raio, 3);

    cout << "VOLUME = " << volume << "\n";
    return 0;
}