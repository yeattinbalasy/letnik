#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, end;
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;

    int sum = 0;

    for (int number = start; number <= end; ++number) {
        sum += number;
    }

    cout << "Сумма чисел в диапазоне от " << start << " до " << end << ": " << sum << endl;

    return 0;
}