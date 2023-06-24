#include <bits/stdc++.h>

using namespace std;

int main () {
  int a,b;
  std::cin >> a >> b;
  

  float us = (float)a/b;
  std::cout << "Usual division: " << us << '\n';
  std::cout << "Division without remainder:" << (a/b) << '\n';
  std::cout << "remainder:" << (a%b) << '\n';
  
 
}