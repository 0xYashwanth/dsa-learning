#include<bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    struct Node *right;
    int key;
    Node(int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    }
};
int height(Node *root)
{
    if(root==NULL)
        return 0;
    else
        return max(height(root->left),height(root->right))+1;
}
int main()
{
    return 0;
}