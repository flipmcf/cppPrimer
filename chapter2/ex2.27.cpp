#include <iostream>

int main()
{ 
    //int i = -1, &r = 0; //illegial - reference cannot refer to literal
    
    int i2;
    int *const p2 = &i2; // legal.  p2 will always point to i2


    const int i = -1, &r1 = 0;  // Legal! const reference can refer to a literal
    const int *const p3 = &i2; // legal.  p3 will always point to i2
                              // and cannot modify the value if i2 through p3
    const int *p1 = &i2;       // legal.  pi will always point to i2, but you can modify i2 through p1

   //const int &const r2;       // (not sure) illegial - '&' must preceed an identifier.
                              // if it is legal, then a reference must be initialized to an object
    
    const int i3 = i, &r2 = i;  // legal. i3 cannot be modified, but i can be modified through &r2
                              // also, if i changes, i3 does not.
    

    return(0);   
}