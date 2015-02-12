#include <iostream>
#include "Sales_item.h"

int main()
{
    
    Sales_item in_book, sum_book;
    
    //initialize sum_book with first line of data
    std::cin >> sum_book;
    
    while (std::cin >> in_book){
        sum_book += in_book;    
    }
    
    std::cout << sum_book << std::endl;
        
}