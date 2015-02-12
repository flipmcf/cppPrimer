#include <iostream>

int main()
{
    int x = 0, y = 0;

    std::cout << "Gimme two numbers to multuply" << std::endl;
    
    std::cin >> x >> y;
    
    std::cout << "the product of ";
    std::cout << x ;
    std::cout << " and ";
    std::cout << y;
    std::cout << " is " ;
    std::cout << x * y ;
    std::cout << std::endl;
    
    return 0;
}