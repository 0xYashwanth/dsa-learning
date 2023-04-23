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
void levelOrder(Node *root)
{
    if(root==NULL) return;
    if(root->left!=NULL) cout<<root->left->key<<" ";
    if(root->right!=NULL) cout<<root->right->key<<" ";
    levelOrder(root->left);
    levelOrder(root->right);
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
    cout<<root->key<<" ";
    levelOrder(root);
    return 0;
}