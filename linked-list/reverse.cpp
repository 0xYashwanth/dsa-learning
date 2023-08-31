#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printList(Node *head)
{
    Node *curr=head;
    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node *reverse(Node *head)
    {
        if(head==NULL || head->next==NULL)
            return NULL;
        
        Node *curr=head,*prev=NULL;
        while(curr!=NULL)
        {
            Node *nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
int main()
{
    Node* head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printList(head);
    printList(reverse(head));
    return 0;
}