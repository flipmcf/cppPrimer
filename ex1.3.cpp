#include <iostream>

int main()
{
    int x = 0, y = 0;

    std::cout << "Gimme two numbers to multuply" << std::endl;
    
    std::cin >> x >> y;
    
    std::cout << "the product of " << x << " and " << y 
              << " is " << x * y << std::endl;
    return 0;
}