#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k1 = n/6;
    int k2 = n%6;
    if (k2 == 1) {k1+=6;}
    if (k2 == 2) {k1+=5;}
    if (k2 == 3) {k1+=4;}
    if (k2 == 4) {k1+=3;}
    if (k2 == 5) {k1+=2;}
    if (k2 == 6) {k1+=1;}

    cout << k1 << " " << n * 6;

    return 0;
}