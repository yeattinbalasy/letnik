#include <bits/stdc++.h>

using namespace std;

int main(){
    long a,b,c,d,r; 
    cin>>a>>b; 
    c=a; d=b; 

    while(d)r = c % d, c= d, d = r; 
    cout<< a/c*b<< endl; 
    cin.get(); 
    cin.get();
}
