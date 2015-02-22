#include <iostream>

//i is a const int
//j is an int (top level const dropped)
//k is a const int
//p is a const int* (pointer to const int) but p is not const
//j2 is a const int
//k2 is a reference to const int

int main()
{ 
    
    const int i = 42;
    auto j = i; const auto &k = i; auto *p =&i;
    const auto j2 = i, &k2 = i;    


    // this should be ok, and j should be '12'
    j = 12.2;
    std::cout << "j: " << j << std::endl;
    
    //this should fail, because &k is const
    k = 12;
    
    //this should fail, because p points to a const int
    *p = 12;
    //however, this should be ok, because p is not a top-level const
    p = &j;
    //and this will print '12'
    std::cout << "*p: " << *p << std::endl;
    
    
    //this will print '42'
    std::cout << "j2: " << j2 << std::endl;
    //this will fail, because j2 is a const int:
    j2 = 12;
    
        
    //this will print '42'
    std::cout << "k2: " << k2 << std::endl;
    // but this will fail, because k2 references a const int
    k2 = 12;
        
    
}
