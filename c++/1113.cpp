#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;
    while (x != y) {
        if (x > y) {
            cout << "Decrescente\n";
        } else if (x < y) {
            cout << "Crescente\n";
        }
        cin >> x >> y;
    }

    return 0;
}