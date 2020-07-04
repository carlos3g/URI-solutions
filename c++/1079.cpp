#include <iostream>

using namespace std;

int main() {
    int n, i;
    double nota1, nota2, nota3, media;
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n;
    for (i=0;i<n;i++) {
        cin >> nota1 >> nota2 >> nota3;
        media = (nota1*2 + nota2*3 + nota3*5)/10;
        cout << media << "\n";
    }

    return 0;
}