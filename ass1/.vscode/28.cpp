#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        if(i % 3 == 0 or i % 5  == 0){
            sum += i;
        } 
    }
    cout << sum << endl;
    return 0;
}