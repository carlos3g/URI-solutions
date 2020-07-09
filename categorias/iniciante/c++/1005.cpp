#include <iostream>

using namespace std;

int main() {
    double n1, n2, media;
    cout.precision(5);
    cout.setf(ios::fixed);

    cin >> n1;
    cin >> n2;
    media = ((n1 * 3.5) + (n2 * 7.5) ) / 11;

    cout << "MEDIA = " << media << "\n";
    return 0;
}