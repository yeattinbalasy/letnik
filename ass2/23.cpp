#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mini = min(a, b);
    int maxi = a + b - 1;

    cout << mini << " " << maxi << endl;

    

    return 0;
}