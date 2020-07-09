#include <iostream>

using namespace std;

int main() {
    int cem, cinq, vint, dez, cinc, dois, um, nota;

    cin >> nota;
    cem = nota/100;
    cinq = (nota%100)/50;
    vint = (nota%100%50)/20;
    dez = (nota%100%50%20)/10;
    cinc = (nota%100%50%20%10)/5;
    dois = (nota%100%50%20%10%5)/2;
    um = (nota%100%50%20%10%5%2);

    cout << nota << "\n";
    cout << cem << " nota(s) de R$ 100,00\n";
    cout << cinq << " nota(s) de R$ 50,00\n";
    cout << vint << " nota(s) de R$ 20,00\n";
    cout << dez << " nota(s) de R$ 10,00\n";
    cout << cinc << " nota(s) de R$ 5,00\n";
    cout << dois << " nota(s) de R$ 2,00\n";
    cout << um << " nota(s) de R$ 1,00\n";
    return 0;
}