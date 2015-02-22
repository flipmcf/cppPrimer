#include <iostream>



int main()
{ 
    int a = 3, b = 4;

    decltype(a) c = a;  //c is an int  c = 3.  a = 3
    decltype((b)) d = a;  //d is a int& which references the integer a  a = 3.  d = a = 3
    ++c; //c now equals 4;  a unchanged
    ++d; // a now equals 4.
    
    std::cout << "a,b,c,d: " 
              << a << ", "
              << b << ", "
              << c << ", "
              << d << ", " << std::endl;
}
