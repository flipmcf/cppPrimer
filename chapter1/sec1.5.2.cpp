#include <iostream>
#include "Sales_item.h"

int main()
{
    // currItem is the number we're counting; we'll read new values into item
    Sales_item currItem, item;
    
    //  read first book and ensure that we have data to process
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> item){
            if (item == currItem)
                ++cnt;
            else {
                std::cout << currItem << " occurs "
                          << cnt << " times" << std::endl;
                currItem = item;
                cnt = 1;
            }
        } // end while
        // remember to print out the last value
        std::cout << currItem << " occurs "
                  << cnt << " times" << std::endl;
            
    } // end if
    return 0;
}