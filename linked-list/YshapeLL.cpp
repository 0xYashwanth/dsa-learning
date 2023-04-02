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
int intersectPoint(Node *head1,Node *head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=head2;
    
    Node* fast=head1;
    Node* slow=head1;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast) break;
    }
    if(slow==fast){
    
        if(slow==head1){
            return slow->data;
        }
        else{
            slow=head1;
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            return slow->next->data;
        }
        
    }
    return -1;
}
int main()
{
    return 0;
}