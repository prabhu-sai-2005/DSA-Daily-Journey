#include<bits/stdc++.h>
using namespace std;

int f(int idx,vector<int> v,int n,int s,int sg)
{
    if(idx==n)
    {
        if(s==sg)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    s=s+v[idx];
    int l=f(idx+1,v,n,s,sg);


    s=s-v[idx];
    int r=f(idx+1,v,n,s,sg);

    return l+r;

}

int main()
{
    int n=0,x=0,sg=0,ans=0;
    vector<int> v;
    vector<int> ev;


    cout<<"enter n value ";
    cin>>n;
    
    cout<<"enter sg value ";
    cin>>sg;




    for(int i=0;i<n;i++)
    {
        cout<<"enter x value ";
        cin>>x;
        v.push_back(x);
    }

   ans=f(0,v,n,0,sg);
   cout<<ans<<" ";

    return 0;
}
