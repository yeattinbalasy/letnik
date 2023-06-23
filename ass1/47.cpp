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

    // Находим наименьший элемент в массиве
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Выводим наименьший элемент на экран
    cout << "Наименьший элемент: " << min << endl;

    // Освобождаем память, выделенную для массива
    delete[] arr;

    return 0;
}