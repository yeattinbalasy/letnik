#include <bits\stdc++.h>

using namespace std;

int main() {
    int number;
    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        cout << number << " - идеальное число." << endl;
    } else {
        cout << number << " - не является идеальным числом." << endl;
    }

    return 0;
}