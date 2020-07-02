#include <iostream>
#include <string>

using namespace std;

int main() {
    string op1, op2, op3, res;

    cin >> op1 >> op2 >> op3;
    if (op1 == "vertebrado") {
        if (op2 == "ave") {
            if (op3 == "carnivoro") {
                res = "aguia";
            }
            if (op3 == "onivoro") {
                res = "pomba";
            }
        }
        if (op2 == "mamifero") {
            if (op3 == "onivoro") {
                res = "homem";
            }
            if (op3 == "herbivoro") {
                res = "vaca";
            }
        }
    } else {
        if (op2 == "inseto") {
            if (op3 == "hematofago") {
                res = "pulga";
            }
            if (op3 == "herbivoro") {
                res = "lagarta";
            }
        }
        if (op2 == "anelideo") {
            if (op3 == "hematofago") {
                res = "sanguessuga";
            }
            if (op3 == "onivoro") {
                res = "minhoca";
            }
        }
    }

    cout << res << "\n";
    return 0;
}