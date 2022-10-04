#include<bits/stdc++.h>
using namespace std;
class node {
   public :
   int data;
   node* next;
   node(int val)
   {
       data =val;
       next = NULL;
   }
};
void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node* &head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
   temp = temp->next;
    }
    temp->next = n;
    
}
 void display(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {   
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void getNthNode(node* &head,int index)
{
  int count = 0;
  node* temp = head;
  while(temp!=NULL)
  {
      if(count==index)
      {  
          cout<<"The value at the "<<index<<" is : "<<temp->data;
      }
      temp  = temp->next;
      count++;
  }
}
int main()
{
    node *head  = NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    cout<<endl;

    
   getNthNode(head,3);
  return 0;
}