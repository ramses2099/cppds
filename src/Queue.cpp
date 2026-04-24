#include "Queue.h"

bool Queue::isFull()
{
    if (front == 0 && rear == SIZE - 1)
    {
        return true;
    }
    return false;
}

bool Queue::isEmpty()
{
    if (front == -1)
    {
        return true;
    }
    return false;
}

void Queue::enQueue(i16 element)
{
    if (isFull())
    {
        std::cout << "Queue is full" << std::endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        items[rear] = element;
        std::cout << "Inserted " << element << std::endl;
    }
}

i16 Queue::deQueue()
{
    i16 element;
    if(isEmpty()){
        std::cout << "Queue is empty " << std::endl;
        return (-1);
    }
    else{
        element = items[front];
        if(front >= rear){
            front = -1;
            rear = -1; 
        }else{
            front++;
        }
        std::cout << "Deleted -> " << element << std::endl;
        return element;
    }
}


void Queue::display(){
    i16 i;
    if(isEmpty()){
        std::cout << "Empty Queue " << std::endl;        
    }else{
        std::cout << "Front index-> " << front << std::endl;
        std::cout << "Items -> ";
        for (i = front; i <= rear; i++)
        {
            std::cout << items[i] << " ";
        }
        std::cout << endl;
        std::cout << "Rear index-> " << rear << std::endl;
    }
}