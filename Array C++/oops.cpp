#include<iostream>
using namespace std;
class student{
    string name;
    public :
    
    int age;
    bool gender;
    student()
    {
        cout<<"Default constructor"<<endl;
    }//default constructor
    student(string s,int a,int g)
    {  cout<<"Parameterised constructor"<<endl;
        name =s;
        age =a;
        gender =g;

    }// parameterised constructor
    student(student &a)
    {   cout<<"copy consructor"<<endl;
        name = a.name;
        age =a.age;
        gender = a.gender;
    }//copy constructor
    void setname(string s)
    {
        name =s;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void printinfo()
    {
cout<<"Name = ";
      cout<<name<<endl;
      cout<<"Age = ";
      cout<<age<<endl;
      cout<<"gender = ";
      cout<<gender<<endl;
    }
};

    
int main()
{  
   // student a;
   // a.name = 'Urvi';
  //  a.age = 20;
  //  a.gender =1;
  //student arr[3];
  //for(int i=0;i<3;i++)
   // { string s;
      //   cin>>s;
      //   arr[i].setname(s);
      

   //   cout<<"Age = ";
   //   cin>>arr[i].age;
   //   cout<<"gender = ";
  //    cin>>arr[i].gender;
 //  }
    //for(int i=0;i<3;i++)
   // {
    //    arr[i].printinfo();
  //  }
  student a("Urvi",20,1);
  // a.printinfo();
   student b;
   student c=a;
  
    
    return 0;
}