#include<bits/stdc++.h>
using namespace std;

void subseq(int i, vector<int> &e ,vector<int> &v ,int n,int qsum)
{
    if(i==n)
    {
        int sum=0;
        for(auto it : e)
        {
            sum=sum+it;
        }
        if(sum==qsum)
        {
           for(auto it : e)
           {
               cout<<it<<" ";
           }
           cout<<endl;
        }

        return;
    }

    e.push_back(v[i]);
    subseq(i+1,e,v,n,qsum);

    e.pop_back();
    subseq(i+1,e,v,n,qsum);

}

int main()
{ 
    vector<int> v;
    int n,ele,qsum;
    cout<<"enter no of elements ";
    cin>>n;
    cout<<"enter sum ";
    cin>>qsum;

    for(int i=0;i<n;i++)
    {
        cout<<"enter  element ";
        cin>>ele;
        v.push_back(ele);
    }
   
    vector<int> e;
    subseq(0,e,v,n,qsum);

    return 0;
}
