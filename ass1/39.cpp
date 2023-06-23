#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    int originalNumber = number;
    int numDigits = 0;

    // Подсчет количества цифр в числе
    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }

    int sum = 0;
    originalNumber = number;

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    if (sum == number) {
        cout << "Число является числом Армстронга." << endl;
    } else {
        cout << "Число не является числом Армстронга." << endl;
    }

    return 0;
}