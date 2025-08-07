#include<bits/stdc++.h>
using namespace std;
bool flag=false;

void subseq(int i, vector<int> &e ,vector<int> &v ,int n,int sum,int sumg)
{
    
    if(i==n)
    {
        if(sum==sumg && flag==false)
        {
        flag=true;
        for(auto it : e)
        {
            cout<<it<<" ";
        }
        cout<<endl;
       }
        return;
    }

    e.push_back(v[i]);
    sum=sum+v[i];

    subseq(i+1,e,v,n,sum,sumg);

    sum=sum-v[i];
    e.pop_back();
    subseq(i+1,e,v,n,sum,sumg);

}

int main()
{ 
    vector<int> v;
    int n,ele,sumg=3,sum=0;
    cout<<"enter no of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter  element ";
        cin>>ele;
        v.push_back(ele);
    }
   
    vector<int> e;
    subseq(0,e,v,n,sum,sumg);



    return 0;
}
