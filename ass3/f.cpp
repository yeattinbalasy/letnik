#include <bits/stdc++.h>

using namespace std;

int main () {
    int d,c;
    std::cin >> d >> c;
    int p,n;
    std::cin >> p >> n;

    int total = d * 100 + c;
    int cost = p * n;
    
    int dif = total - cost;

    int rd = dif / 100;
    int rc = dif % 100;

    if(dif < 0) {
        std::cout << -rd << " " << -rc << std::endl;
    }else {
        std::cout << rd << " " <<  rc << std::endl;
    }
    return 0;




   


}