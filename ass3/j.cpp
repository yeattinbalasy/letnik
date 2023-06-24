#include <bits/stdc++.h>

using namespace std;

int main () {
    int t,p,y;
    std::cin >> t >> p >> y;
    
    int cnt = 0;
    while(t < y){
        t += (t*p)/100;
        cnt++;
    }
     std::cout << cnt << endl;

}