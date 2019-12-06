#include<iostream>
using namespace std;
int main()
{

int  n= 5;

for( int i= 1; i<=n ; i++)
 { for(int  j= 1; j<=n; j++)
   {
    
   if( j <= i)
      cout<< j;
   else
     cout<< "*";
   }
 cout<<endl;
}
/*
1****
12***
123**
1234*
12345
*/
cout<<endl;
cout<<"\t okay next pattern\t\n"; 

for( int i =n; i>=1; --i)
{
 for( int j= 1; j<= i; ++j)
  {
cout<<j;
}
cout<<endl;
} 
 
cout<<endl;
cout<<"\t okay next pattern\t\n"; 

for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=2*n-1;j++)
   {
    if( j>=n-(i- 1) && j<= n+(i-1))
    {
      cout<<"*";
    }
   else
    cout<<" ";
   }
   cout<<endl;
 }

cout<<endl;
cout<<"\t\t The Floyd's Triangle\n";

int num=1;
for(int i = 1; i<=4; i++)
{
 for(int j= 1; j<=i; j++)
 {
  cout<<num<<" ";
  
  num++;
 }
 cout<<"\n";
}

return 0;
}


