// move zeros at front

#include<iostream>
using namespace std;

int moveZeroFront(int a[], int n) 
{
 int current= n-1;
 for(int i= n-1; i>=0;i--)
  {
   if(a[i]!=0)
    { 
     a[current] =a[i];
     current--;
    }
  }
  while(current>=0)
  {
   a[current]=0;
   current--;
  } 
}
  
int main()
{
 int a[]= {2,0,4,0,4,5,0,0,7,0,2};
 int n=sizeof(a)/sizeof(a[0]);
 cout<<"array will be\n";
 moveZeroFront(a,n);
 for(int i =0; i< n; i++)
  cout<< a[i]<<" ";   
 return 0;
}
