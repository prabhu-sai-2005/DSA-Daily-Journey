#include <iostream>
#include <cmath>

using namespace std;

int count(int n)
{
    int c = 0;  
    c=log10(n)+1;
    return c;
}

int main() 
{
    int n, x;
    cin >> n;

    x = count(n);
    cout << "no of digits " << x << endl;

    return 0;
}
