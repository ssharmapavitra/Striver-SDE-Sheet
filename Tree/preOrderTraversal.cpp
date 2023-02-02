#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Root Left Right
// T&S -- O(N)
void preOrder(Node *node)
{
    if (node == NULL)
        return;
    cout << (node->data) << " ";
    preOrder(node->left);
    preOrder(node->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    preOrder(root);
    return 0;
}

/*
        1
      2   3
            5
*/