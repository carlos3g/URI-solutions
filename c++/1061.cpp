#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double dia1, h1, m1, s1, dia2, h2, m2, segs, s2;
    char a [4];
    char b [4];

    cin >> a >> dia1;
    cin >> h1 >> a >> m1 >> b>> s1;
    cin >> b >> dia2;
    cin >> h2 >> a >> m2 >> b >> s2;

    segs = (s2+(86400*dia2)+(3600*h2)+(60*m2))-(s1+(86400*dia1)+(3600*h1)+(60*m1));

    cout << (int) segs/86400 << " dia(s)\n";
    cout << (int) segs%86400/3600 << " hora(s)\n";
    cout << (int) segs%86400%3600/60 << " minuto(s)\n";
    cout << (int) segs%86400%3600%60 << " segundo(s)\n";
    return 0;
}
