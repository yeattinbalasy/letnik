#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    int h = n / 3600 % 24;
    int m = n % 3600 / 60;
    int s = n % 60;
    cout << h << ":" 
        << m / 10 << m % 10 << ":" 
        << s / 10 << s % 10 << endl;
}