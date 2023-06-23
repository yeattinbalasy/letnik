#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;

   int k1 = n / 100;
   int k2 = n % 10;
   if (k1 == k2) {
       cout << "polindrome" << endl;
   }else {
       cout << "not polindrome" << endl;
   }

}