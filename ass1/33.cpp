#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    int sum = 0;
    int product = 1;

    do {
        sum = 0;
        while (number != 0) {
            int digit = number % 10;
            sum += digit;
            product *= digit;
            number /= 10;
        }
        number = sum;
    } while (sum >= 10);

    if (sum == 1) {
        cout << "Число является счастливым." << endl;
    } else {
       cout << "Число не является счастливым." << endl;
    }

    return 0;
}