#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
     
    int sum1 = (n / 100000) + (n / 10000) % 10; 
    int sum2 = (n / 100) % 10 + (n / 10) % 10; 
    
    if(sum1 == sum2){
        cout << "YES";
    }else {
        cout << "NO";
    }
}

