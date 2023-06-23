#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int mx = 0; int ldc = 0;
    for(auto c : s)
    {
        if(c == '0')
        {
            ldc++;
            if(ldc > mx)
            {
                mx = ldc;
            }
            
        }
        if(c == '1')
        {
            ldc = 0;
        }
    }
    cout << mx;
}