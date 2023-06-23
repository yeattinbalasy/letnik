#include <bits/stdc++.h>

using namespace std;

int main(){
    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    double length = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    cout << fixed << setprecision(10) << length << endl;

}