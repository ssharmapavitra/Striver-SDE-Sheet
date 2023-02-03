#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
    Node(int valu)
    {
        val = valu;
        left = right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    // Pre/Post/In Order
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    vector<int> pre, post, in;
    while (!st.empty())
    {
        pair<Node *, int> temp = st.top();
        st.pop();
        if (temp.second == 1)
        {
            pre.push_back(temp.first->val);
            temp.second++;
            st.push(temp);

            if (temp.first - left != NULL)
            {
                st.push({temp.first->left, 1});
            }
        }
        else if (temp.second == 2)
        {
            in.push_back(temp.fisrt->val);
            temp.second++;
            st.push(temp);
            if (temp.fisrt->right != NULL)
            {
                st.push({temp.fisrt->right, 1});
            }
        }
        else
        {
            post.push_back(temp.first->val);
        }
    }
    cout << "PreOrder"
         << " => ";
    for (int i = 0; i < in.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << "\n"
         << "INOrder"
         << " => ";
    for (int i = 0; i < in.size(); i++)
    {
        cout << in[i] << " ";
    }
    cout << "\n"
         << "PostOrder"
         << " => ";
    for (int i = 0; i < in.size(); i++)
    {
        cout << post[i] << " ";
    }

    return 0;
}

/*
        1
      2   3
            5
*/