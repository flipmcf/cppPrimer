#include <iostream>

int main()
{
    int high, low;
    std::cout << "enter two numbers - and I'll give you a range: " << std::endl;
    std::cin >> low >> high;
    
    if (low > high){
        int temp;
        temp = high;
        high = low;
        low = temp;
    }    
    
    int x = low;
    while (x <= high)
    {
        std::cout << x++ << std::endl;       
    }
    
    
    return(0);
}