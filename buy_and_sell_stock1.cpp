// best time to buy & sell stock(i);
#include<bits/stdc++.h>
using namespace std;
int max_p(vector<int> &price)
{
	int min_value= INT_MAX;
	int max_profit=0;
	for(auto x:price)
	{
		//the first if calculate min value from vector;
		if(x<min_value)
		 {
		 min_value= x;
	    }
	    //here else if function again checks the
	    //condition from first element of vector
		//while min_Value is already calculated
		//by above if condition( the first if)
		 else if(x-min_value> max_profit)
		 {
		 	max_profit= x- min_value;
		 }
	}
	return max_profit;
}
int main()
{
	vector<int> price{7,1,5,3,6,4};
	cout<< max_p(price);
	return 0;
	
}
