#include <iostream>

int main()
{
    int value = 0, sum = 0;
    
    for(; std::cin >> value; sum += value){}
        
    std::cout << "total is " << sum << std::endl;
    
}