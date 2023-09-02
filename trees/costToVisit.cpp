#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void leafLevel(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        ans.push_back(level);

    if (root->left != NULL)
        leafLevel(root->left, ans, level+1);
    if (root->right != NULL)
        leafLevel(root->right, ans, level+1);

}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->right->left->right=new Node(80);

    vector<int>ans;
    leafLevel(root,ans,1);
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}





void leafLevel(Node *root,vector<int> &ans,int level)
    {
        if(root==NULL)
            return;
            
        if(root->left==NULL && root->right==NULL)
            ans.push_back(level);
        
        if(root->left!=NULL)
            leafLevel(root->left,ans,level+1);
            
        if(root->right!=NULL)
            leafLevel(root->right,ans,level+1);
    }
    int getCount(Node *root, int k)
    {
        //code here
        vector<int> ans;
        int level=1;
        leafLevel(root,ans,level);
        
        sort(ans.begin(),ans.end(),greater<>());
        int result=0;
        for(auto i:ans)
        {
            if(k>=i)
            {
                k=k-i;
                result++;
            }
            else
            break;
        }
        return result;
        
        
    }