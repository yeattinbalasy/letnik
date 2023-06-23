
#include <iostream>
#include <string>

int main()
{
    int n, i, j; std::cin >> n >> i >> j;
    int w1, w2;
    if(i > j)
    {
        std::swap(i, j);
    }
    w1 = j - i - 1;
    w2 = n - j + i - 1;
    if(w1 > w2)
    {
        std::cout << w2; 
    }
    else if(w2 > w1)
    {
        std::cout << w1;
    }
    else{
        std::cout << w1;
    }
}