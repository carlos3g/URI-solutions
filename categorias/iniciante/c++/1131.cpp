#include <iostream>

using namespace std;

int main() {
    int p1, p2, i, op, qtd=1;
    int inter=0, gremio=0, empates=0;

    cin >> p1 >> p2;
    if (p1 == p2) {
        empates += 1;
    } else if (p1 > p2) {
        inter += 1;
    } else {
        gremio += 1;
    }
    cout << "Novo grenal (1-sim 2-nao)\n";
    cin >> op;
    while (op == 1) {
        cin >> p1 >> p2;
        if (p1 == p2) {
            empates += 1;
        } else if (p1 > p2) {
            inter += 1;
        } else {
            gremio += 1;
        }
        qtd += 1;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> op;
    }

    cout << qtd << " grenais" << "\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empates << "\n";
    if (inter == gremio) {
        cout << "Nao houve vencedor\n";
    } else if (inter > gremio) {
        cout << "Inter venceu mais\n";
    } else {
        cout << "Gremio venceu mais\n";
    }
    return 0;
}