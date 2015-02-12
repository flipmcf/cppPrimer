#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;  //holds data for next transaction
    
    //read first item to see if we have data to process
    if (std::cin >> total){
        
        Sales_item trans; // holds running sum
        while (std::cin >> trans){
            // check to see if we are still processing the same book:
            if (total.isbn() == trans.isbn()){
                total += trans;
            }
            else {
                // next book - print running sum from previous book
                std::cout << total << std::endl;
                total = trans;  // total is now new book
            }
        }
        std::cout << total << std::endl;  // print last transaction
    }
    else {
        //no data -warn user
        std::cerr << "No Data?!" << std::endl;
        return -1;
    }
    return 0;
}