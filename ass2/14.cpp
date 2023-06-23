#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j, c; 
    cin >> n >> m >> i >> j >> c;
    
    if(n * m % 2 == 0) {
    cout << "equal";
    }
    else if((i + j) % 2 == c) {
    cout << "black";
    }
    else {
    cout << "white";
    }
}