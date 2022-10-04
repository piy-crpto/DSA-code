include<iostream>
#include<vector>
using namespace std;
    
    // template funtion to display vec5---------------->>>>>>>>>>>>>>>>
   template <class T>
   void displayvec5(vector<T> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
         
    }
   void display1(vector<int> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
         
    }
   void display(vector<int> &v)
    {
        for (int i = 0; i <4; i++)
        {
            // ------->>>>>>>>>>>>>at function use to find element at that position
            cout<<v.at(i)<<" ";
        }
        cout<<endl;
         
    }
int main()
{    
    //  vector of 4 element --------------..............................>>>>>>>>>>>>>>>

    vector<int> vec2(4); 
          
        //   charector vector--------------->>>>>>>>>>>>>>>
    vector<char> vec3; 

    // vector with the help of another vector---------->>>>>>>>>>>>>

    vector<int> vec4(vec2);

    // 6 element vector of 3s----------------------->>>>>>>>>>>>>>>>
    vector<int> vec5(6 , 3);
    displayvec5(vec5);

    cout<<vec5.size();

    // vector of 0 element----------->>>>>>>>>>>>>>
    vector<int> vec1;
    
    int element;
    for (int i = 0; i < 4; i++)
    {
        // cout<<"enter the value of element ";
        // cin>>element;

        // push_back function use to push element in vevtor

    //   vec1.push_back(element);      
    }
                         
    
 
 
    //  vec1.pop_back();     ------------->>>>>>>>>>>>>>>push function use to push item from vector----->>>>>
    //  display(vec1);
    //  display(vec1);


    
    //   ----------------->>>>>>>>>>>>>insert use to insert item at any specyfic index------->>>>>>>>>>

    //  vector<int>  :: iterator itor = vec1.begin();
    // vec1.insert(itor+2 ,10, 50);
    // display(vec1);

     
    return 0;
}