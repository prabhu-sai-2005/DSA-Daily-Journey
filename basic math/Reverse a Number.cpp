#include <iostream>
#include <cmath>

using namespace std;

int count(int n)
{

int nn=0,r;

while (n>0)
{
    r=n%10;
    nn=r+(nn*10);
    n=n/10;
    
}
return nn;

}

int main() 
{
    int n, x;
    cout<<"enter number";
    cin >> n;

    x = count(n);
    cout << "reverse " << x << endl;

    return 0;
}
