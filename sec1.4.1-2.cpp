#include <iostream>

int main()
{
    int x = 10;
    while (x >= 0)
    {
        // let's post-decrement inside the output statement, just for fun (and to show off)
        std::cout << x-- << std::endl;
        // I'm just bored.  We'll be past chaper 1 soon enough
    }
    
}