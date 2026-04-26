# Example of using STL C++


The Standard Template Library (STL) is a powerful set of C++ template classes and functions that provide common data structures and algorithms. It is essentially a library of "pre-built" tools that save you from reinventing the wheel (like writing your own sorting algorithm or linked list from scratch).

The STL is built on three main pillars: Containers, Algorithms, and Iterators.

- Containers: Object that store data(Data Structure) e.g vector, list, stack, map
- Algorithms: Functions used to manipulation data search, sorting e.g sort, find
- Iterators: Object that act like "pointers" to bridge algorithms and containers e.g begin(), end(); 

## Resaons to use C++ standard library:
- Code reuse, no need to re-invent the wheel
- Efficiency (fast and use less resources). Modern C++ compiler are usually tuned to optimize for C++ standard library code.
- Accurate, less buggy.
- Terse, readable code; reduced control flow.
- Standardization, guarenteed availability.
- A role model of writing library.
- Good knowledge of data structures and algorithms.


## Container vector
std::vector is a sequence container that represents a dynamic array.

Unlike standard arrays (e.g., int arr[5]), which have a fixed size determined at compile time, a vector can grow or shrink in size automatically as you add or remove elements. It is the most commonly used container in C++ because it offers a great balance of speed and flexibility.

```
/***
 *  STL: Standard Template Library
 *  -- Data Structure and Algorithms
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vector<int>::iterator itr1 = vec.begin();
    vector<int>::iterator itr2 = vec.end();

    // Iterator at like pointer
    cout << "vector element unsort" << endl;
    for (vector<int>::iterator itr = itr1; itr != itr2; ++itr)
    {
        cout << *itr << " ";
    }

    sort(itr1, itr2);

    cout << endl
         << "vector elemt sort" << endl;
    // sort element vector
    for (vector<int>::iterator itr = itr1; itr != itr2; ++itr)
    {
        cout << *itr << " ";
    }

    cout << endl;
    return EXIT_SUCCESS;
}


```