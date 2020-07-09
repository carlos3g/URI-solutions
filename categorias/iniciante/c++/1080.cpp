#include <iostream>

using namespace std;

int main() {
    int maior=-1, n, i, p;

    for (i=0;i<100;i++) {
        cin >> n;
        if (n > maior) {
            p = i+1;
            maior = n;
        }
    }

    cout << maior << "\n";
    cout << p << "\n";
    return 0;
}