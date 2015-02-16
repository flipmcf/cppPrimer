#include <iostream>


std::string global_str;
int global_int;

int main()
{
   int local_int;  //on my machine, this has a value of 0 when printed below... but it's undefined
   std::string local_str;
   
   std::cout << "global_str " << global_str << std::endl;
   std::cout << "global_int " << global_int << std::endl;
   std::cout << "local_int " << local_int << std::endl;
   std::cout << "local_str " << local_str << std::endl;
   
}