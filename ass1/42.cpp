#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, end;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;

    cout << "Простые числа в диапазоне от " << start << " до " << end << ":\n";

    for (int number = start; number <= end; ++number) {
        bool isPrime = true;

        if (number <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= number; ++i) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    cout <<endl;

    return 0;
}