#include <iostream>

int main()
{
    int sum = 0;
    for (int x=-100; x<=100; ++x) sum += x;
    std::cout << sum;
}

