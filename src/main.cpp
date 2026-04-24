#include <iostream>
#include <string>
#include <math.h>
#include "Stack.h"

using namespace std;

int main()
{
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    i16 n = s.pop();
    std::cout << " Element Pop: " << n << std::endl;


    return EXIT_SUCCESS;
}
