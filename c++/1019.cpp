#include <iostream>

using namespace std;

int main() {
    int total, segundos, minutos, horas;

    cin >> total;
    horas = total/3600;
    minutos = (total%3600)/60;
    segundos = (total)%60;

    cout << horas << ":" << minutos << ":" << segundos << "\n";
    return 0;
}