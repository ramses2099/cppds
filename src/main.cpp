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

// Binary search tree
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *createNode(int data)
{
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

BstNode *insertNode(BstNode *root, int data)
{
    if (root == nullptr)
    {
        root = createNode(data);
        return root;
    }
    else if (data <= root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

bool searchNode(BstNode* root, int data){
    if(root == nullptr)return false;
    else if(root->data == data)return true;
    else if(data <= root->data)return searchNode(root->left, data);
    else return searchNode(root->right, data);
}

int main()
{
    // root node
    BstNode *rootNode = nullptr;
    rootNode = insertNode(rootNode, 15);
    rootNode = insertNode(rootNode, 10);
    rootNode = insertNode(rootNode, 20);
    rootNode = insertNode(rootNode, 25);
    rootNode = insertNode(rootNode, 8);
    rootNode = insertNode(rootNode, 12);

    int n;
    cout << "Enter the number be search: ";
    cin>>n;

    if(searchNode(rootNode, n))cout << endl << "Found" <<endl;
    else cout << "No Found" << endl;


    delete rootNode;

    cout << endl;
    return EXIT_SUCCESS;
}
