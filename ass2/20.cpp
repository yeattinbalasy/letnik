#include <bits/stdc++.h>

using namespace std;

int main() {
    string in;
    cin >> in;

    set<int> fl; // Множество для хранения уникальных этажей
    int cFl = 1; // Текущий этаж
    int cnt = 0; // Счетчик нажатий кнопок

    for (char button : in) {
        cnt++;

        if (button == '1') {
            cFl++;
        } else if (button == '2') {
            cFl--;
        }

        fl.insert(cFl); // Добавляем текущий этаж в множество

        // Как только у нас есть 2 уникальных этажа, можно выйти из цикла
        if (fl.size() == 2) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}