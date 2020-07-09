#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, tot=0, x, totC=0, totR=0, totS=0;
    string y;
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x >> y;
        if (y == "C") {
            totC += x;
        } else if (y == "R") {
            totR += x;
        } else if (y == "S") {
            totS += x;
        }
        tot += x;
    }

    cout << "Total: " << tot << " cobaias\n";
    cout << "Total de coelhos: " << totC << "\n";
    cout << "Total de ratos: " << totR << "\n";
    cout << "Total de sapos: " << totS << "\n";
    cout << "Percentual de coelhos: " << (totC*100.0)/tot << " %\n";
    cout << "Percentual de ratos: " << (totR*100.0)/tot << " %\n";
    cout << "Percentual de sapos: " << (totS*100.0)/tot << " %\n";
    return 0;
}