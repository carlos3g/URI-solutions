#include <iostream>

using namespace std;

int main() {
    int tmp, n1, n2, n3, n4, n5, n6;

    cin >> n1 >> n2 >> n3;
    n4 = n1;
    n5 = n2;
    n6 = n3;
    
    if (n1 > n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    if (n2 > n3) {
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }
    if (n1 > n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    cout << n1 << "\n" << n2 << "\n" << n3 << "\n\n";
    cout << n4 << "\n" << n5 << "\n" << n6 << "\n";

    return 0;
}