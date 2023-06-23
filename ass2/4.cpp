#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, s; 
    cin >> a >> b;
    
    double x;
    s = a * b;
    x = sqrt(s);
    
    if(x == (long long int) x)
    {
      cout << (long long int) x;
    }
    else
    {
       cout << 0;
    }
}
