 //Push operation costly
 
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
      q2.push(val);
      N++;
      while(!q1.empty())
      {
          q2.push(q1.front());
          q1.pop();
      }
      queue<int> temp = q1;
      q1 = q2;
      q2 = temp;
  }
  void Pop()
  {
    q1.pop();
    N--;

    
  }
  int Top()
  {
      return q1.front();
  }
  int size()
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
    
    cout<<st.size()<<endl;
    return 0;
}