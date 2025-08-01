#include <iostream>
#include <cmath>

using namespace std;

bool count(int n)
{
int x=0;
int r,nn;

x=n;

while(n>0)
{
 r=n%10;
 nn=nn*10+r;
 n=n/10;
}
if(nn==x)
  return true;
else
  return false;


}

int main() 
{
    int n, x;
    cout<<"enter number";
    cin >> n;

    if(count(n))
    {
      cout << "true"<< endl;
    }
    else
    {
      cout << "no"<< endl;
    }


    return 0;
}
