#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
   cout << "Введите число: ";
    cin >> number;

    int factorial = 1;

    if (number >= 0) {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        cout << "Факториал числа " << number << " равен: " << factorial << endl;
    } else {
        cout << "Ошибка! Факториал определен только для неотрицательных чисел." << endl;
    }

    return 0;
}