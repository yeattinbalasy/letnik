#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m ;
    cin >> m;

    int arr1[m], arr2[m]; // 2   6 elements
    for (int i = 0; i < m; i++) {
        cin >> arr1[i] >> arr2[i];
    } 

    for (int i = 0; i < m; i++) {
       for(int j = arr1[i]-1; j < arr2[i]; j++) {
           cout << arr[j] << " ";
       }
       cout << endl;
    } 
    
}