#include<iostream>
using namespace std;

void moveZero(int a[], int n)
{
 int count =0;
 for( int i =0; i<n; i++)
 if( a[i]!= 0)
 swap( a[count++], a[i]);
}

void printArray(int a[], int n)
{
 for(int i=0; i<n; i++)
 cout<<a[i]<<" ";
}
int main()
{
int a[]= {0,4,2,0,7,0,0,1,0,7,0,4,};
int n= sizeof(a)/sizeof(a[0]);
moveZero(a,n);
printArray(a,n);
return 0;
}

