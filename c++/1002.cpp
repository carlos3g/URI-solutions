#include <iostream>

using namespace std;

int main() {
    double raio, area;
    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> raio;
    area = 3.14159 * raio * raio;

    cout << "A=" << area << "\n";
    return 0;
}