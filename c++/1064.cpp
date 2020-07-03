#include <iostream>

using namespace std;

int main() {
    double Ns[6], soma=0;
    int i, tot=0;
    cout.precision(1);
    cout.setf(ios::fixed);

    for (i=0;i<6;i++) {
        cin >> Ns[i];
    }
    for (i=0;i<6;i++) {
        if (Ns[i] > 0) {
            tot += 1;
            soma += Ns[i];
        }
    }

    cout << tot << " valores positivos\n";
    cout << soma/tot << "\n";
    return 0;
}