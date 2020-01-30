#include <bits/stdc++.h> 
using namespace std; 

// function to convert decimal to binary 
void decToBinary(int n) 
{ 
	// array to store binary number 
	stack<int> s;

	// counter for binary array 
	int num = 0; 
	while (n > 0) { 

		// storing remainder in binary array 
		num = n % 2; 
        s.push(num);
		n = n / 2; 
		
	} 

	// printing binary array in reverse order 
	while(!s.empty())
    {
       cout<<s.top();
       s.pop();
      
} }


// Driver program to test above function 
int main() 
{ 
	int n = 56; 
	decToBinary(n); 
	return 0; 
} 
