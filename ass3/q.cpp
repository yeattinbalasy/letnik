
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int c = -n+1; c < n; c++){
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n; j++){
                if(i - j == c ){
                cout<<a[i][j]<<" ";
                }
            } 
        }
         cout << endl;
    }


    return 0;
}