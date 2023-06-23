#include <bits/stdc++.h>

using namespace std;

int cnt[1000];

int main(){
   int n;
   cin >> n;

   int arr[n];
   for(int i = 0; i < n; i++){
     cin >> arr[i];
   }
    
   for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
   }
   int maximum = 0;
   for(int i = 0; i < 1000; i++){
        maximum = max(cnt[i], maximum);
   }
   for(int i = 1000; i != 0 ; i--){
       if(maximum == cnt[i]){
        cout << i << " ";
       }
   }
    
    

}