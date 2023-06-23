#include <bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin >> s;
   
   bool flag1 = true;

   for(int i = 0; i < s.size(); i++){
       if(s[i] != s[s.size()-i - 1]){
             flag1 = false;
       }
   }bool flag2 = true;
    for(int i = 0; i < s.size() - 1; i++){
       if( s[i] != s[i+1]){
          flag2 = false;
       }
    }

    if(flag2){
        cout << 0;
    } else if(flag1){
        cout << s.size()-1;
    }else{
        cout << s.size();
    }
    

}