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
void sortedInsert(node* &head,int val)
{
    node* n = new node(val);
    node* temp = head;
    if(temp==NULL)
    {
        n->next = n;
        head = n;
    }
    else if(temp->data >= n->data)
    {  

        // If value is smaller than head's value then
      //  we need to change next of last node 
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;

    }
    else
    {
 /* Locate the node before the point of insertion */
        while (temp->next!= head && temp->next->data < n->data)
        {
            temp = temp->next;
        }
         
        n->next = temp->next;
        temp->next = n;
    }
}
int main()
{   
    node *head  = NULL;
   
 
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,2);
    insertAtHead(head,1);

    display(head);
    sortedInsert(head,3);
    sortedInsert(head,6);

    display(head);

    
    return 0;
}       