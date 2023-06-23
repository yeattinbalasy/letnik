#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    for(int i = 0;i < s.size();i++){
        for(int j = 0; j < i ;j++){
            if(s[j] == s[i]){
             cout << s[i]; 
             break ;
            }
         }
    }

    
  


}