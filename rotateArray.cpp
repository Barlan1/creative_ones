//rotate array in O(n*d) times 

#include<bits/stdc++.h>
using namespace std;

void leftRotate_once(int a[], int n)
{
 int temp = a[0], i;
 for( i =0; i<n-1; i++)
  a[i] = a[i+1];
 
 a[i] = temp;
}
void leftRotate(int a[], int d, int n)
{
 for(int i=0; i< d; i++)
  leftRotate_once(a, n);
}

int main()
{
 int a[] = {1,2,3,4,5};
 int n= sizeof(a)/sizeof(a[0]);
   
leftRotate(a,2,n);
 for(int i= 0; i<n; i++)
  cout<<a[i]<<" ";
   
cout<<endl;
 return 0;
}
