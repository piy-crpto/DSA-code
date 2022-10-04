// iterative way
// #include<bits/stdc++.h>
// using namespace std;
// class node {
//    public :
//    int data;
//    node* next;
//    node(int val)
//    {
//        data =val;
//        next = NULL;
//    }
// };
// void insertAtHead(node* &head,int val)
// {
//     node* n = new node(val);
//     n->next = head;
//     head = n;
// }
// void insertAtTail(node* &head,int val)
// {
//     node* n = new node(val);
//     if(head==NULL)
//     {
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next!=NULL)
//     {
//    temp = temp->next;
//     }
//     temp->next = n;
    
// }
//  void display(node* &head)
// {
//     node* temp = head;
//     while(temp!=NULL)
//     {   
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// node* reverse(node* &head)
// {
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     while(currptr!=NULL)
//     {
//         nextptr=currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;

//     }
//     return prevptr;
// }
// int main()
// {
//     node *head  = NULL;
//     insertAtHead(head,4);
//     insertAtHead(head,3);
//     insertAtHead(head,2);
//     insertAtHead(head,1);
//     insertAtHead(head,0);
//     insertAtTail(head,5);
//     insertAtTail(head,6);
//     display(head);
   
//     cout<<"After reversing the linked list is :"<<endl;
//     node* newhead = reverse(head);
//     display(newhead);

//     cout<<endl;

    
   
//   return 0;
// }








//Reacursive way
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
node * reverseRecursive(node* &head)
{  
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;


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
   
    cout<<"After reversing the linked list is using recursive function:"<<endl;
     node* newhead = reverseRecursive(head);
     display(newhead);

     cout<<endl;

    
   
  return 0;
}