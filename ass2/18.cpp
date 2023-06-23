#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
   cin >> N >> M;

    string s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    int shift = M; // Изначально сдвиг равен M (максимально возможное значение)

    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            if (s[i][j] == 'A') {
                shift = min(shift, M - j - 1);
                break;
            }
        }
    }

    cout << shift << endl;

    return 0;
}