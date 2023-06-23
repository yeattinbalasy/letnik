#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    cout << "Перевернутое число: " << reversedNumber << endl;

    return 0;
}