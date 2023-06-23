#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int in[N];
    int t[N];
    for (int i = 0; i < N; i++) {
        cin >> in[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    int max1 = in[0] * t[0];
    int max2 = 0;

    for (int i = 1; i < N; i++) {
        int tax = in[i] * t[i];

        if (tax > max1 || (tax == max1 && i < max2)) {
            max1 = tax;
            max2 = i;
        }
    }

    cout << max2 + 1 << endl;

    return 0;
}