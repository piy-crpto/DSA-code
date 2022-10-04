#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int with_draw;
	double curr_bal;
	cin>>with_draw>>curr_bal;
	if(with_draw%5==0)
	{
	    double res =(curr_bal -with_draw -0.50);
	    cout<<setprecision(2)<<res<<endl;
	}
	else
	{
	    cout<<curr_bal;
	}
	
	return 0;
}
