#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    std::cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    int sum = 0;
    float average = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    average = (float)sum / n;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: "<< average;


}