#include <iostream>

/* Exercise 2.41 - use this Sales_data class (struct) to rewrite the exercises in 
   1.5.2 
   and 1.6
*/
struct Sales_data { 
    std::string bookId;
    unsigned unitsSold;
    double revenue;
};

// reads several transactions and counts how many transactions occur for each ISBN
int main()
{
   Sales_data bookIn, currentBook;
   int count=0;
   
   std::cin >> currentBook.bookId >> currentBook.unitsSold >> currentBook.revenue;
   count++;
   
   while (std::cin >> bookIn.bookId >> bookIn.unitsSold >> bookIn.revenue){
      
      if (bookIn.bookId == currentBook.bookId){
         count++;
         }
      else{
         // new book
         // print count of last book
         std::cout << "ISBN: " << currentBook.bookId << " " << count << " Transactions" << std::endl;
         currentBook.bookId = bookIn.bookId;
         currentBook.unitsSold = bookIn.unitsSold;
         currentBook.revenue = bookIn.revenue;
         count=1;
      }
   } 
   
   //print last transaction 
   std::cout << "ISBN: " << currentBook.bookId << " " << count << " Transactions" << std::endl;
     
}