#include <iostream>

//exercise 1.13
int main()
{

    //int sum = 0, val = 50;
    //while (val <= 100) {
        //sum += val;
        //++val;
    //}
   
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;   
    
    std::cout << "The sum of 50 to 100 is " << sum << std::endl ;
    return(0);
    
}