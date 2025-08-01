#include <iostream>
using namespace std;

int count(int n)
{
    int c = 0;  
    while(n > 0)
    {
        c++;
        n = n / 10;
    }
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
