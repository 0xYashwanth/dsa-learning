#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
bool isLoop(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    while(slow!=NULL&&fast->next!=NULL)
    {
        if(slow==fast) return true;
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}
int main()
{
    return 0;
}