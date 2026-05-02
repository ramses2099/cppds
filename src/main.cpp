/***
 *  STL: Standard Template Library
 *  -- Data Structure and Algorithms
 */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>           //set and multiset
#include <map>           //set and multimap
#include <unordered_set> //unordered set/ multiset
#include <unordered_map> //unordered map/ multimap
#include <iterator>
#include <algorithm>
#include <numeric> // some numeric algorithm
#include <functional>

using namespace std;

int main()
{
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
    return EXIT_SUCCESS;
}
