#include <iostream>

using namespace std;

int main() {
    double n1, n2, n3, n4, media, r;
    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2 + n2*3 + n3*4 + n4)/10;
    cout << "Media: " << media << "\n";
    if (media >= 7) {
        cout << "Aluno aprovado.\n";
    } else if (media < 5) {
        cout << "Aluno reprovado.\n";
    } else {
        cout << "Aluno em exame.\n";
        cin >> r;
        cout << "Nota do exame: " << r << "\n";
        if (r >= 5) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << (r+media)/2 << "\n";
    }

    return 0;
}