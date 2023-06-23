#include <bits/stdc++.h>

using namespace std;

int main() {

    int K;
    cin >> K;

    int st = (K - 1) * 10;
    int sh = st / 60;
    int sm = st % 60;

    if (st> (20 - 8) * 60) {
        cout << "NO" << endl;
    } else {
        cout << sh << " " << sm << endl;
    }

    return 0;
}