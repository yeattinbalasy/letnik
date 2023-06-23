#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cout << "Give me a number: ";
    cin >> number;

    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
       cout << "Polyndrom" << endl;
    } else {
        cout << "not Polyndrom" << endl;
    }

    return 0;
}