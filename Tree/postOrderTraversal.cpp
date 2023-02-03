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

// Left Right Root
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    postOrder(root);
    return 0;
}

/*
        1
      2   3
            5
*/