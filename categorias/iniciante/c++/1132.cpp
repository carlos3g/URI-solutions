#include <iostream>

using namespace std;

int main() {
    int i, x, y, tmp, soma=0;

    cin >> x >> y;
    if (y < x) {
        tmp = x;
        x = y;
        y = tmp;
    }
    for (i=x;i<=y;i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    cout << soma << "\n";
    return 0;
}