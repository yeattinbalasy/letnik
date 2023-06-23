#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Создаем массив с указанным размером
    int* arr = new int[size];

    // Запрашиваем у пользователя элементы массива
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Находим сумму всех элементов
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Вычисляем среднее арифметическое
    double average = static_cast<double>(sum) / size;

    // Выводим среднее арифметическое на экран
    cout << "Среднее арифметическое: " << average << endl;

    // Освобождаем память, выделенную для массива
    delete[] arr;

    return 0;
}