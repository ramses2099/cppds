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
    vector<int> v1 = {20, 30, 40, 25, 15};
    print_vec(v1, "33");

    // convert the vector to a heap
    make_heap(v1.begin(), v1.end());
    print_color_heap(v1);

    // sort heap
    sort_heap(v1.begin(), v1.end());
    print_color_heap(v1);

    cout << endl;
    return EXIT_SUCCESS;
}
