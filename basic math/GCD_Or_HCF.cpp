#include <bits/stdc++.h>
using namespace std;
/*
void gcd(int n1 , int n2)
{
   int hcf=0,maxx;
   maxx=max(n1,n2);

  for(int i =1;i<=sqrt(maxx);i++)
  {
     if(n1%i==0 && n2%i==0)
     {
       hcf=i;
     }
  }
  cout<<"HCF IS "<<hcf;
}*/

void gcd(int n1 , int n2)
{
   while(n1>0 && n2>0)
   {
    if(n1>n2)
    {
        n1=n1%n2;
    }
    else
    {
        n2=n2%n1;
    }
   }
    if(n1 == 0) 
    {
        cout<<n2;
    }

    cout<<n1;


   }


int main()
{
  int n1,n2;
  cout<<" enter number 1 ";
  cin>>n1;

  cout<<" enter number 2 ";
  cin>>n2;

  gcd(n1,n2);
  
}

