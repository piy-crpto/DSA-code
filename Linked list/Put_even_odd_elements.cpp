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

node* evenAfterOdd(node* &head)
{
     if(head==NULL)
     {
         return head;
     }
     node *evenStart;
     node* oddHead = head;
     node* evenHead;
     evenHead = head->next;
     evenStart = evenHead;
     while(evenHead!=NULL && evenHead->next!=NULL)
     {
       oddHead->next = evenHead->next;
       oddHead = oddHead->next;
       evenHead->next = oddHead->next;
       evenHead =  evenHead->next;
       
     }
      oddHead->next  = evenStart;
          return head;
     

}
int main()
{
     node *head  = NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);
     insertAtTail(head,5);
     insertAtTail(head,6);
     display(head);
     cout<<"After even After Odd "<<endl;
     node* newHead = evenAfterOdd(head);
     display(newHead);

     cout<<endl;
    return 0;
}