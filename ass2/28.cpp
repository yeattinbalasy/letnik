#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int h,m;
    cin >> s;
    cin >> h >> m;

    int s1 = s[0] - 48;
    int s2 = s[1] - 48;
    int hour=  s1 * 10 + s2;
    int s3 = s[3]-48;
    int s4 = s[4]-48;
    int min = s3 * 10 + s4;

    min+=m;

    if(min >= 60){
        hour++;
        min = min%60;
    }   
    hour += h;
    hour = hour%24;
   
    cout << hour/10 << hour%10 << ":" << min/10 << min%10;
    
    // (s[0] - 48) * 10 + (s[1] - 48);
}