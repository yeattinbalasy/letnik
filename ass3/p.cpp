#include<bits/stdc++.h>

using namespace std;

int main(){
   int n;
   cin >> n;

     int arr[100];
    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }
    
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > 1) {
            cnt += arr[i] - arr[i - 1] - 1;
        }
    }

   cout << cnt;

    return 0;
}


