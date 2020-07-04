#include <iostream>

using namespace std;

int main() {
    int n, i, k, x, y, soma=0, tmp;

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x >> y;
        if (y < x) {
            tmp = x;
            x = y;
            y = tmp;
        }
        for (k=x+1;k<y;k++) {
            if (k%2 == 1) {
                soma += k;
            }
        }
        cout << soma << "\n";
        soma = 0;
    }

    return 0;
}