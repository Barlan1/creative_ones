//reverse array

#include<iostream>
using namespace std;
 
int main()
{
 int a[9]= {1,2,3,4,5,6,7,8,9};
 
 int i = 0, n= 8;
 
 while( n>= i)
 {
  int temp= a[i];
  a[i] = a[n];
  a[n] = temp;
  i++; 
   n--;
  }
for(i= 0; i<9; i++)
 cout<< a[i]<<" ";

return 0;
}
