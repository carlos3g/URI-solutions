#include <iostream>

using namespace std;

int main() {
    int x, y, soma, i, tmp;

    cin >> x >> y;
    while (x != 0 && y != 0 && x > 0 && y > 0) {
        soma = 0;
        if (y < x) {
            tmp = x;
            x = y;
            y = tmp;
        }
        for (i=x;i<=y;i++) {
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << "\n";
        cin >> x >> y;
    }

    return 0;
}