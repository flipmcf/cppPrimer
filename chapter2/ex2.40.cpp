#include <iostream>

/* Exercise 2.40 - write your own version of the Sales_data class (struct)*/
struct Sales_data { 
    std::string bookId;
    unsigned unitsSold;
    double revenue;
};

int main()
{
    /* let's see if this works */
    Sales_data book;
    Sales_data book2;
    
    book.bookId = "some id";
    book.unitsSold = 0;
    book.revenue = 0;
    
    book.unitsSold++;
    book.revenue += 12.99;
    
    std::cout << "Book id " << book.bookId << " "
              << "units sold " << book.unitsSold << " "
              << "revenue " << book.revenue << std::endl;
              
    book2.bookId = "another book";
    book2.unitsSold = 0;
    book2.revenue = 0;
    
    book2.unitsSold++;
    book2.revenue += 14.99;
    
    std::cout << "Book id " << book2.bookId << " "
              << "units sold " << book2.unitsSold << " "
              << "revenue " << book2.revenue << std::endl;
    
}