/*
C++ program to implement stack with array

Pros: Easy to implement. Memory is saved as pinters are not involved.
Cons: It is not dynamic. It doesn't grow and shirk depending on needs at runtime.
*/

#include <bits/stdc++.h>
using namespace std;

#define MAX 100

typedef int16_t i16;

class Stack
{
    i16 top;

public:
    i16 a[MAX];
    Stack() { top = -1; }
    bool push(i16 x);
    i16 pop();
    i16 peek();
    bool isEmpty();
};
