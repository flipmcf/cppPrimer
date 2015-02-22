#include <iostream>

int a = 3;

int main()
{ 
    int a = 3, b = 4;
    decltype(a) c = a;  //c is an int.  the value of c is 3
    decltype(a = b) d = a; //d is a int&.  It refences a. However, decltype doesn't actually 'do' the assignment, so a is still 3 (and so is d)
    // b remains unchanged at the value of 4
    
    std::cout << "a,b,c,d: " 
              << a << ", "
              << b << ", "
              << c << ", "
              << d << ", " << std::endl;
}
