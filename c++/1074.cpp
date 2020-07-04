#include <iostream>

using namespace std;

int main() {
    int Ns[10000], i, n;

    cin >> n;
    for (i=0;i<n;i++) {
        cin >> Ns[i];
    }
    for (i=0;i<n;i++) {
        if (Ns[i] == 0) {
            cout << "NULL\n";
        } else if (Ns[i] % 2 == 0) {
            cout << "EVEN";
        } else {
            cout << "ODD";
        }
        if (Ns[i] > 0) {
            cout << " POSITIVE\n";
        } else if (Ns[i] < 0) {
            cout << " NEGATIVE\n";
        }
    }

    return 0;
}