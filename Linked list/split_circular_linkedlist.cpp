#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node* next;
  node(int val)
   {
    data =val;
   
   }
};
void insertAtTail(node* &head,int val)
{
   node* temp = head;
   node* n  = new node(val);
   if(head==NULL)
   {
      n->next = n;
       head = n;
       return;
   }
   while(temp->next!=head)
   {
       temp  = temp->next;
   }
   temp->next = n;
   n->next = head;

}
void insertAtHead(node* &head,int val)
{
    node* temp = head;
   node* n  = new node(val);
   if(head==NULL)
   {
       n->next = n;
       head = n;
       return;
   }
   while(temp->next!=head)
   {
       temp = temp->next;
   }
   temp->next = n;
   n->next = head;
   head = n;
}
void display(node* &head)
{
     node* temp = head;
    do
    {   
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}
void splitCircularLinkedList(node* &head,node* &head1,node* &head2)
{
    node* slowptr = head;
    node* fastptr = head;
    while(fastptr->next!=head && fastptr->next->next!=head)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        
    }

    //if number of nodes is even then move fast ptr upto tail
    if(fastptr->next->next == head)
    {
        fastptr = fastptr->next;
    }

    // Set the head pointer of first half 
    head1 = head;

    // Set the head pointer of second half 
    if(head->next != head)
    {
         head2 = slowptr->next;
    }


     // Make second half circular 
    fastptr->next = slowptr->next;
         
    //Make first half circular 
    slowptr->next = head;
       


}
int main()
{   
    node *head  = NULL;
    node *head1  = NULL;
    node *head2  = NULL;
    
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtHead(head,2);
    insertAtHead(head,1);
   display(head);
    splitCircularLinkedList(head,head1,head2);
     display(head1);
     display(head2);

    
    return 0;
}       