#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;


}
