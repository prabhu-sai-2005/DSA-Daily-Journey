#include <bits/stdc++.h>
using namespace std;
//USING VECTORS NEED TO SORT 😅

void divisors(int n)
{
  vector<int> v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
             v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v)
    {
      cout<<it<<" ";
    }
  }



int main()
{
  int n;
  cout<<" enter number";
  cin>>n;
  

 divisors(n);

}


/*
//SET ALREDY SORTED😎
void divisors(int n)
{
  set<int> v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.insert(i);
            if((n/i)!=i)
             v.insert(n/i);
        }
    }

    for(auto it : v)
    {
      cout<<it<<" ";
    }
  }



int main()
{
  int n;
  cout<<" enter number";
  cin>>n;
  
 divisors(n);
}
*/