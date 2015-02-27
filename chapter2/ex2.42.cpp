#include <iostream>
#include "sales_data.h"


// This assumes that all books read in have the same bookId (ISBN)
int main()
{
   Sales_data bookIn, bookTotal;
   
   std::cin >> bookTotal.bookId >> bookTotal.unitsSold >> bookTotal.revenue;
   std::cout << "Transaction Read: " << bookTotal.bookId << " "
                << bookTotal.unitsSold << " "
                << bookTotal.revenue << " " << std::endl;
     
   
   
   while (std::cin >> bookIn.bookId >> bookIn.unitsSold >> bookIn.revenue){
      std::cout << "Transaction Read: " << bookIn.bookId << " "
                << bookIn.unitsSold << " "
                << bookIn.revenue << " " << std::endl;
  
      bookTotal.unitsSold += bookIn.unitsSold;
      bookTotal.revenue += bookIn.revenue;
   
   } 
    
   std::cout << std::endl; // print blank line
   
   std::cout << "Total: " << bookTotal.bookId << " "
                << bookTotal.unitsSold << " "
                << bookTotal.revenue << " " << std::endl;
   
}