#include <bits/stdc++.h>

using namespace std;

int main () {
    int a,b,c,d;
    std::cin >> a >> b >> c >> d;

    if (std::abs(a - c) == std::abs(b - d)){
        std::cout << "WON" << std::endl;
    }else{
        std::cout << "LOSE" << std::endl;
    }


}