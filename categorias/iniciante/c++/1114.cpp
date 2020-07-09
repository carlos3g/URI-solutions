#include <iostream>

#define PASS 2002

using namespace std;

int main() {
    int input;

    cin >> input;
    while (input != PASS) {
        cout << "Senha Invalida\n";
        cin >> input;
    }
    cout << "Acesso Permitido\n";

    return 0;
}