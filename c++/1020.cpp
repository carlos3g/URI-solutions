#include <iostream>

using namespace std;

int main() {
    int anos, meses, dias, total;

    cin >> total;
    anos = total / 365;
    meses = (total%365)/30;
    dias = total%365%30;

    cout << anos << " ano(s)" << "\n";
    cout << meses << " mes(es)" << "\n";
    cout << dias << " dia(s)" << "\n";
    return 0;
}