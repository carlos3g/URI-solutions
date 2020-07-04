#include <iostream>

using namespace std;

int main() {
    int tot, Ns[5];

    for (int i=0;i<5;i++) {
        cin >> Ns[i];
    }
    for (int i=0;i<5;i++) {
        if (Ns[i] % 2 == 0) {
            tot += 1;
        }
    }

    cout << tot << " valores pares\n";
    return 0;
}