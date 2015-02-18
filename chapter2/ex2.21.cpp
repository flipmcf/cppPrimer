#include <iostream>

int main()
{
    int i = 0;
    
    double* dp = &i; // illegial
    
    int *ip = i; //illegial
    
    int *p = &i; // legal
    
   
}