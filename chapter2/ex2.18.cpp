// Write code to change the value of a pointer
// write code to change the value to which the pointer points
#include <iostream>

int main()
{
    
    int i = 0;
    int *ptr = nullptr;
    
    //change the value of the pointer:
    ptr = &i;
    
    //change the value to which the pointer points:
    *ptr = 42;
    
    //check the work (should print '42')
    
    std::cout << i << std::endl;
    
    return(0);
    
}