 
 #include<iostream>
 #include<stack>
using namespace std;
class que
{
  stack <int> s;
  
  public:
  void Push(int x)
  {
      s.push(x);
  }
  int Pop()
  {
      if(s.empty())
     {
      cout<<"Queue is empty\n";
      return -1;
     }

     int x = s.top();
     s.pop();
     if(s.empty())
     {
         return x;
     }
     int item = Pop();
     s.push(x);
     return item;
 
  }
  bool empty()
  {
      if(s.empty())
      {
          return true;
        
      }
      return false;
  }

};
int main()
{      que q;
     q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);

    cout<<q.Pop()<<endl;
    q.Push(5);
    cout<<q.Pop()<<endl;
    cout<<q.Pop()<<endl;
    cout<<q.Pop()<<endl;
    cout<<q.Pop()<<endl;
    cout<<q.Pop()<<endl;
    
    return 0;
}