#include<bits/stdc++.h>
using namespace std;

/*void rec(int n ,int sum)
{
    if(n<1)
    {
        cout<<sum;
        return ;
    }


    rec(n-1,sum+n);

}
*/
int rec(int n)
{
    if(n==0)
    {
        
        return 0;
    }


    return n+rec(n-1);

}


int main()
{
    int n=0;
    cin>>n;

    int ans=rec(n);
    cout<<ans;



    return 0;
}
