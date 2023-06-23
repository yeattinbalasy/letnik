#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p ;
    int v ;
    
    int maxi = -999;\
    int pos;
    int arr[n];
    for(int i=0; i<n; i++){
       cin >> arr[i]; // возраст
       cin >> p; // пол
       
       if(p == 1){
          if( maxi < arr[i]) {
             maxi = arr[i];
             pos = i;
          }
       }

    }  
    if(maxi == -999) {
        cout << "-1";
        return 0;
    } else {
        cout << pos+1;
    }
    
}