#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    
    bool flag = true;
    for(int i = 2; i <= sqrt(n);i++){
        if(n % i == 0){
            flag = false;
        }
    }
     (flag) ?cout << "Prime" : cout << "Not prime";
   
}