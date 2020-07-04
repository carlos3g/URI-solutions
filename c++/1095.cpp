#include <iostream>

using namespace std;

int main() {
    int i, x;
    i = 1;

    for(x=60; x >= 0; x = x-5) {
        cout << "I=" << i << " J=" << x << "\n";
        i = i+3;
    }

    return 0;
}
