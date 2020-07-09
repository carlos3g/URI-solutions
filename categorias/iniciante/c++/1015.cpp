#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, distancia;
    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    distancia = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

    cout << distancia << "\n";
    return 0;
}