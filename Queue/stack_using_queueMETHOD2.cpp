 
 
 #include<iostream>
 #include<stack>
 #include<queue>
using namespace std;
class Stack
{  
    int N;
 queue <int> q1;
 queue <int> q2;
  
  public:
Stack()
{
  N=0;
}
  void Push(int val)
  {
      q1.push(val);
      N++;

  }
  void Pop()
  {
    if(q1.empty())
    {
       return;
    }
    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    q1.pop();
    N--;
    queue<int> temp = q1;
     q1 = q2;
      q2 = temp;

    
  }
  int Top()
  {    if(q1.empty())
      return -1;

      while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    int ans = q1.front();
    q2.push(ans);

     queue<int> temp = q1;
     q1 = q2;
      q2 = temp;

return ans;

  }
  int Size()
  {
      return N;
  }

};
int main()
{     Stack st;
     st.Push(1);
     st.Push(2);
     st.Push(3);
     st.Push(4);

    cout<<st.Top()<<endl;
    st.Pop();
     cout<<st.Top()<<endl;
     st.Pop();
    
     cout<<st.Top()<<endl;
    st.Pop();
     cout<<st.Top()<<endl;
     st.Pop();
    
    cout<<st.Size()<<endl;
    return 0;
}