#include<iostream>
using namespace std;

bool amstrng(int n)
{
int x=0;
int nn=0;
x=n;

while(n>0)
{
    int r=n%10;
  nn = (r * r * r) + nn;
    n=n/10;
}

if(x==nn)
 return 1;
else 
 return 0;



}


int main()
{
  int n;
  cout<<" enter number";
  cin>>n;

  if(amstrng(n))
   cout<<"yes"<<endl;
  else
   cout<<"no"<<endl;


    return 0;
}