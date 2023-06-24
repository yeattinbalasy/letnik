#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  std::cin >> n;
  
  int sum = 0;
  
  for(int i = 0; i < n; i++) {
    sum = (i / 100 % 10) + (i / 10 % 10) + (i % 10)+1;
   
  }

  std::cout << sum << endl;

}