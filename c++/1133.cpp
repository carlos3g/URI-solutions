#include <iostream>

using namespace std;

int main() {
    int x, y, tmp, i;

    cin >> x >> y;
    if (y < x) {
        tmp = x;
        x = y;
        y = tmp;
    }
    for (i=x+1;i<y;i++) {
        if (i%5 == 2 || i%5 == 3) {
            cout << i << "\n";
        }
    }

    return 0;
}