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
    for (i=x+1;i<y;i++) {
        if (i % 2 == 1 || i % -2 == -1) {
            soma += i;
        }
    }

    cout << soma << "\n";
    return 0;
}