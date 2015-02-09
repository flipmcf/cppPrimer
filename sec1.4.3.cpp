#include <iostream>

int main()
{
    int value = 0, sum = 0;
    
    //This will read in values from stdin and sum them, until EOF is reached:
    for(; std::cin >> value; sum += value){}
        
    //However, this is unreadable and relies on side effects.        
    //I would never write this kind of code in normal circumstances.
    // I feel so dirty inside right now I have to write these comments.
        
    std::cout << "total is " << sum << std::endl;
    
}