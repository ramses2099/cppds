#include "Stack.h"


bool Stack::push(i16 x)
{
    if (top >= (MAX - 1))
    {
        std::cout << "Stack Overflow" << std::endl;
        return false;
    }
    else
    {
        a[++top] = x;
        std::cout << x << " Push into stack" << std::endl;
        return true;
    }
}

i16 Stack::pop(){
    if(top < 0){
        std::cout << " Stack UnderFlow" << std::endl;
        return 0;
    }
    else{
        i16 x = a[top--];
        return x;
    }
}