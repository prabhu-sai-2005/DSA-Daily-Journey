#include<bits/stdc++.h>
using namespace std;



void rec(int n )
{

if(n==0)
{
    return;
}
   cout<<"prabhu "  <<n<<endl;;
   n--;
   rec( n );
  
}

int main()
{
    int n=0;
    cin>>n;

    rec(n);
    
    return 0;
}