#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cout << "Give me a number: ";
    cin >> number;

    int minDigit = 0;

    while (number != 0) {
        int digit = number % 10;
        if (digit < minDigit && minDigit != 0) {
            minDigit = digit;
        }
        number /= 10;
    }

    cout << "The smallest figure: " << minDigit << endl;

    return 0;
}