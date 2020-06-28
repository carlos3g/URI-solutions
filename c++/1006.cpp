#include <iostream>

using namespace std;

int main() {
    double n1, n2, n3, media;
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n1;
    cin >> n2;
    cin >> n3;
    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    cout << "MEDIA = " << media << "\n";
    return 0;
}