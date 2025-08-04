#include<bits/stdc++.h>>
using namespace std;

void name(int i , int n)
{
    if(i>n)
    {
        return;
    }

    cout<<"prabhu "<<i<<endl;
    i++;
    name( i ,  n);

}

int main()
{
   int n=0;
   cin>>n;

   name(1,n);


    return 0;
}