#include <bits/stdc++.h>

using namespace std;

int main () {
    int t,s;
    cin >> t >> s;

    int sum, sel; // sum - сумма т со скидкой sel - сумма скидок

    sel  = (t * s) / 100;
    sum = t - sel;
    cout << sum << ' ' << sel;
}