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
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vector<int>::iterator itr1 = vec.begin();
    vector<int>::iterator itr2 = vec.end();

    //Fastes option traversal container
    /*
    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    {
        cout << *itr << " ";
    }
    */

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
