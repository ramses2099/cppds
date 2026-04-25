#include <iostream>
#include <string>
#include <math.h>
#include <memory>

// TODO check STL Standar Template Library c++

using namespace std;

typedef int16_t i16;

class Node
{
public:
    i16 value;
    Node *next;
};

int main()
{
    // linked list
    Node *head;
    Node *nd1 = NULL;
    Node *nd2 = NULL;
    Node *nd3 = NULL;
    
    // allocate memory
    nd1 = new Node();
    nd2 = new Node();
    nd3 = new Node();

    // assign value
    nd1->value = 0;
    nd2->value = 1;
    nd3->value = 2;
    
    // connect nodes
    nd1->next = nd2;
    nd2->next = nd3;
    nd3->next = NULL;

    head = nd1;
    while(head != NULL){
        cout << "Head values: " << head->value << endl;
        head = head->next;
    }

    // delocate memory
    delete nd3;
    delete nd2;
    delete nd1;
    delete head;
    nd3 = NULL;
    nd2 = NULL;
    nd1 = NULL;
    head = NULL;

    return EXIT_SUCCESS;
}
