#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0; // Счетчик правил с непосредственной левой рекурсией

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        // Получаем левую и правую части правила
        string l = s.substr(0, s.find("->"));
        string r = s.substr(s.find("->") + 2);

        // Проверяем, содержит ли правило непосредственную левую рекурсию
        if (r[0] == l[0]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}