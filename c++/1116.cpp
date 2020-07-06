#include <iostream>

using namespace std;

int main() {
    int n, i;
    double x, y;
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n;
    for (i=0;i<n;i++) {
        cin >> x >> y;
        if (y == 0) {
            cout << "divisao impossivel\n";
        } else {
            cout << x/ (y*1.0) << "\n";
        }
    }

    return 0;
}