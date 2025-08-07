#include<bits/stdc++.h>
using namespace std;

void subseq(int i, vector<int> &e ,vector<int> &v ,int n)
{
    if(i==n)
    {
        if(e.size()==0)
        {
            cout<<"{}";
        }
        for(auto it : e)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    e.push_back(v[i]);
    subseq(i+1,e,v,n);

    e.pop_back();
    subseq(i+1,e,v,n);

}

int main()
{ 
    vector<int> v;
    int n,ele;
    cout<<"enter no of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter  element ";
        cin>>ele;
        v.push_back(ele);
    }
   
    vector<int> e;
    subseq(0,e,v,n);






    return 0;
}
