#include <iostream>

using namespace std;

int main() {
    int tot;
    double tmp;

    for (int i=0;i<6;i++) {
        cin >> tmp;
        if (tmp > 0) {
            tot += 1;
        }
    }

    cout << tot << " valores positivos\n";
    return 0;
}