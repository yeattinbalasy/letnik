#include <bits/stdc++.h>

using namespace std;

int main () {
    int a,b,c;
    std::cin >> a >> b >> c;

    if((b+c > a) || (a+c > b) || (a+b > c)){
        std::cout << "YES" << endl;
    }else{
        std::cout << "NO" << endl;
    }


}