#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, X, Y; 
    
    cin >> x >> y >> X >> Y;
    if((x - X)%2 == 0 and (y - Y)%2 == 0){
        cout << "YES";
    }
    else if((x - X)%2 != 0 and (y - Y)%2 != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}