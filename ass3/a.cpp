#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p;
    int count = 0;

    cin >> p;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        if (n > p) {
            count++;
        }
        p = n;
    }

    cout << count << endl;

    return 0;
}