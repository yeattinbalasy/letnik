#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cnt = 0;
    if(n == 0){
        cout << 1;
        return 0;
    }
    while(n > 0) {
         if(n % 10 == 6 || n % 10 == 9 || n % 10 == 0){
            cnt++;
         } else if(n % 10 == 8){
            cnt += 2;
         }
         n/=10;
    }
    cout << cnt << endl;
}