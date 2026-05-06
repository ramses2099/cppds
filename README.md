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
## STL Headers
```
#include <vector>
#include <deque>
#include <list>
#include <set> //set and multiset
#include <map> //set and multimap
#include <unordered_set> //unordered set/ multiset
#include <unordered_map> //unordered map/ multimap
#include <iterator>
#include <algorithm>
#include <numeric> // some numeric algorithm
#include <functional>
```

## Pairs
```
    pair<int, int> p{1, 3};

    cout << "{" << p.first << "," << p.second << "}" << endl;

    pair<int, pair<int, int>> pp = {1, {3, 4}};

    // prints
    cout << "{" << pp.first << ",{" << pp.second.first << "," << pp.second.second << "}}" << endl;

    // pairs arr[]
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 5}};

    cout << "{";
    for (pair<int, int> item : arr)
    {
        cout << "{" << item.first << "," << pp.second.second << "}";
    }
    cout << "}" << endl;

    cout << endl;
```
## Vector
```
    // A empty vector
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(2, 2);

    // Vector of size 5 with
    // everyone as 100
    vector<int> v2(5, 100); // {100, 100, 100, 100, 100}

    // A vector of size 5
    // initialized with 0
    // might take garbage value,
    // dependent on the vector
    vector<int> v3(5); // {0,0,0,0,0}

    vector<int> v4(5, 20); // {20,20,20,20,20}
    vector<int> v5(v4);    // {20,20,20,20,20}

    // Take the vector to be  {10,20,30,40}
    vector<int>::iterator itr = v.begin();

    itr++;
    cout << *(itr) << endl; // point to 20

    itr = itr + 2;
    cout << *(itr) << endl; // point to 30

    vector<int>::iterator itr2 = v.begin();
    vector<int>::iterator itr3 = v.end();

    vector<int>::iterator itr4 = v5.rbegin();
    vector<int>::iterator itr5 = v5.rend();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    // Way to  print the vector
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *(itr) << " ";
    }

    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *(itr) << " ";
    }

    for (auto itr : v)
    {
        cout << itr << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35}

    // Insert function
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2-> {10,20}

    v.clear(); // erases the entire vector

```
## Heap
A Heap is a complete binary tree data structure that satisfies the heap property: in a min-heap, the value of each child is greater than or equal to its parent, and in a max-heap, the value of each child is less than or equal to its parent. Heaps are commonly used to implement priority queues, where the smallest (or largest) element is always at the root.
```
/***
 *  STL: Standard Template Library
 *  -- Data Structure and Algorithms
 */

#include <numeric> // some numeric algorithm
#include <functional>
#include <string>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

/*
Red: \033[31m
Green: \033[32m
Yellow: \033[33m
Blue: \033[34m
Reset: \033[0m
*/

void print_vec(vector<int> &vec, string color)
{
    cout << "\033[" << color << "m [ ";
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "]" << "\033[0m" << std::endl;
}
//
void print_colored(std::string text, std::string color)
{
    cout << "\033[" << color << "m" << text << "\033[0m";
}
//
void print_color_heap(const vector<int> &heap)
{
    size_t n = heap.size();
    if (n == 0)
        return;

    double maxLevel = log2(n);

    for (size_t i = 0; i < n; i++)
    {
        double level = log2(i + 1);

        std::string color = ((int)level % 2 == 0) ? "32" : "31";

        if (i == 0 || (i & (i + 1)) == 0)
            std::cout << "\nLevel " << level << ": ";

        print_colored(std::to_string(heap[i]) + " ", color);
    }

    cout << endl;
}

int main()
{
    vector<int> heap = {31, 32, 17, 18, 40, 12, 19, 12, 20, 13};
    print_vec(heap, "33");

    //convert the vector to a heap
    make_heap(heap.begin(), heap.end());

    print_color_heap(heap);

    //display max element of heap
    // using front
    cout << "max element of heap: ";
    cout << heap.front() << endl;

    cout << endl;
    return EXIT_SUCCESS;
}
```