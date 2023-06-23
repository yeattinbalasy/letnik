#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
             arr[i][j] = 'X';
        }  
    }
    int pos_x = 0, pos_y = 0;
     for(int i = 0; i < s.size(); i++){
        if(s[i] == 'D'){
            pos_y++;
        }if(s[i] == 'U'){
            pos_y--;
        }if(s[i] == 'R'){
            pos_x++;
        }if(s[i] == 'L'){
            pos_x--;
        }
        arr[pos_y][pos_x] = '*';
     }
     arr[0][0] = '*';
     
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j];
        }  
        cout << endl;
    }
   


}