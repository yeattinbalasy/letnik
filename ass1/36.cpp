#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;
    int count = 0;

    cout << "Введите числа (введите 0 для завершения): ";

    do {
        std::cin >> number;
        sum += number;
        count++;
    } while (number != 0);

    // Исключаем введенный 0 из подсчета среднего арифметического
    count--;

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Среднее арифметическое: " << average << endl;
    } else {
        cout << "Не введено ни одного числа." << endl;
    }

    return 0;
}