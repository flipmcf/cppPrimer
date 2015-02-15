#include <iostream>

int main()
{

    unsigned u = 10, u2 = 42;
    //noting that both are unsigned int's
    
    std::cout << u2 - u << std::endl;
    //This will output 32, becaue u < u2
    
    std::cout << u - u2 << std::endl;
    //This output is guaranteed to be a 'big, positive number' 
    // because the output will also be an unsigned.
    //  I guess, on my system, the answer will be the 32-bit 2's complement of the signed integer (-32)
    //  4294967265
    //  (but one cannot rely on this)

    //Answer: Fail 4294967264 (one's complement?  oh well, it's not portable anyway)
    
    int i = 10, i2 = 42; // ok, now we have signed int's
    
    std::cout << i2 - i << std::endl; // 32 
    std::cout << i - i2 << std::endl; // -32 (yea signed!)
    
    std::cout << i - u << std::endl; // 32
    std::cout << u - i << std::endl;  //oops, but probably ok, barely.  result is 0.
    
    return 0;
}