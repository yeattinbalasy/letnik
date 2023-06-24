#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, t;
    std::cin >> a >> b >> c >> t;

    int total = 0;

    if (t <= a) {
        total = t * b;
    } else {
        total = a * b + (t - a) * c;
    }

   std::cout  << total << endl;

    return 0;
}