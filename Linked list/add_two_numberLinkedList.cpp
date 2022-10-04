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

//insert the node at the tail(end)
void insertAtTail(node* &head,int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return ;
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
node* reverse(node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    // reverse the rest list and put the first element at the end
    node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    // fix the head pointer
    return rest;
}

 node* addTwoLinkedList(node* head1,node* head2)
 {
      node* res=NULL;
      node *prev=NULL;
      node* temp = NULL;
      int carry = 0,sum;

      while(head1!=NULL  || head2!=NULL)
      {
          sum = carry + (head1 ? head1->data:0) +  (head2 ? head2->data:0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum%10;
        temp = new node(sum);

        if(res==NULL)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }

        prev = temp;
                   // Move first and second pointers to next nodes
        if (head1)
            head1 = head1->next;
        if (head2)
            head2 = head2->next;
      }

       if (carry > 0)
        temp->next = new node(carry);
    // return head of the resultant list
    return res;


 }
int main()
{
    node *head1  = NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    display(head1);
   head1 = reverse(head1);
   

   node *head2  = NULL;
    insertAtTail(head2,7);
    insertAtTail(head2,8);
    insertAtTail(head2,9);
    display(head2);
     head2  = reverse(head2);
 
node* res = NULL;
 res = addTwoLinkedList(head1,head2);

   
    res = reverse(res);

    display(res); 
    
   

return 0;
}