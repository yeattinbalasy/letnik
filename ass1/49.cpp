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

    // Находим наибольший и наименьший элементы
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Выводим наибольший и наименьший элементы на экран
   cout << "Наибольший элемент: " << max << endl;
    cout << "Наименьший элемент: " << min << endl;

    // Освобождаем память, выделенную для массива
    delete[] arr;

    return 0;
}