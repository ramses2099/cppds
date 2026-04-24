// Queue implementation in c++ using arrays

#include <iostream>

#define SIZE 5

using namespace std;

typedef int16_t i16;

class Queue
{
private:
    i16 items[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull();
    bool isEmpty();
    void enQueue(i16 element);
    i16 deQueue();
    void display();
};
