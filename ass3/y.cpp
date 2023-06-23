#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int f = 0,b = 0,r = 0,l = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'F'){
            f++;
        }if(s[i] == 'B'){
            b++;
        }if(s[i] == 'R'){
            r++;
        }if(s[i] == 'L'){
            l++;
        }
    }
    // cout << f << " " << b << " " << r << " " << l << endl;

    for(int i = 0; i < f - b; i++){
        cout << "B";
    }for(int i = 0; i < b - f; i++){
        cout << "F"; 
    }for(int i = 0; i < r - l; i++){
        cout << "L";
    }for(int i = 0; i < l - r; i++){
        cout << "R";
    }

}