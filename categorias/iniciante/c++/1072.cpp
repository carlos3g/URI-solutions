#include <iostream>

using namespace std;

int main() {
    int n, in=0, out=0, x, i;

    cin >> n;
    for (i=0;i<n;i++) {
        cin >> x;
        if (10 <= x && x <= 20) {
            in += 1;
        } else {
            out += 1;
        }
    }

    cout << in << " in\n";
    cout << out << " out\n";
    return 0;
}