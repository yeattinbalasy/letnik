#include<bits/stdc++.h>

using namespace std;

int main(){
    int k1, p1, c1, k2, p2, c2; 
    cin >> k1 >> p1 >> c1 >> k2 >> p2 >> c2;
    int q1, q2;
    q1 = (k1 * p1) / 100;
    q2 = (k2 * p2) / 100;

    k1 = k1 - ((k1 * p1) / 100);
    k2 = k2 - ((k2 * p2) / 100);
    int k;
    int total;
    if(k2 > k1)
    {
        k = k2 - k1;
        q2 = q2 + k;
        cout << q2 * c2 + q1 * c1;

    }   
    else
    {
        k = k1 - k2;
        q1 = q1 + k;
       cout << q2 * c2 + q1 * c1;
    } 

}