#include <iostream>


int main()
{ 
    //definitions
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci; 

    const auto f = ci;
    auto &g = ci;
    
    //exercises
    
    a = 42; // the value of `a` is now 42.  r still references i, which is 0
    std::cout <<" a: " << a << " r: " << r << " i: " << i << std::endl;
        
    b = 42; // `b` is now 42  ci is still a const int who'se value is 0
    std::cout <<" b: " << b << " ci: " << ci << " i: " << i << std::endl;

    c = 42; // `c` is now 42. cr is still a reference to ci who'se value is 0
    std::cout <<"c: " << c << " cr: " << cr << " ci: " << ci << " i:" << i << std::endl;
    
    //d = 42; //  this is an error.  d is a int* can't convert int to int*
    
    //e = 42; //  this is an error.  e is a const int* - same error as 'd'
    //g = 42; //  this is an error. g references ci.  ci is a const int.  You can't assign to ci
    
}