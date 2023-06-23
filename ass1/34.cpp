#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cout << "Give me a number: ";
    cin >> number;

    int maxDigit = 0;

    while (number != 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    cout << "The biggest figure: " << maxDigit << endl;

    return 0;
}