#include <iostream>

int main()
{

    int month = 9, day = 7;
    std::cout << month << "/" << day << std::endl;
    
    int month0 = 09, day0 = 07;  //I expect an error here on month0 init
    std::cout << month << "/" << day << std::endl;
    
    return(0);
    
}