#include <iostream>

using namespace std;

int main() {
    int n, i;

    cin >> n;
    for (i=1;i<n+1;i++) {
        if (i % 2 == 1) {
            cout << i << "\n";
        }
    }

    return 0;
}