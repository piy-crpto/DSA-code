#include<iostream>
#include<vector>
using namespace std;
    
int main()
{
    vector <int> v;
    //push back function
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
   

   
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }

//iterator it is a pointer

    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //auto self decides which type of data
    // for(auto element : v)
    // {
    //     cout<<element<<endl;
    // }

    // //pop back function
    v.pop_back();       // 3 deleted
    vector<int> v2(3,50);      //output     50 50 50


    // for(auto element : v2)
    //  {
    //     cout<<element<<endl;
    //  }

    // swap(v,v2);

    // for(auto element : v)
    //  {
    //     cout<<element<<endl;
    //  }
    //  for(auto element : v2)
    //  {
    //     cout<<element<<endl;
    //  }


    //sort(v.begin(),v.end());


    return 0;
}