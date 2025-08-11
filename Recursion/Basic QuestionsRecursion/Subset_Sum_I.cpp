#include <bits/stdc++.h>
using namespace std;


void f(int idx,vector<int> &ev,vector<int> &v,int n)
{
    if(idx==n)
    {
        for(auto it : ev)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    ev.push_back(v[idx]);
    f(idx+1,ev,v,n);
    ev.pop_back();
    f(idx+1,ev,v,n);
}

int main() {
    int n = 0, x = 0, ts = 0;
    vector<int> v, ev;

    cout << "enter n value ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cout << "enter x value ";
        cin >> x;
        v.push_back(x);
    }
    //sort(v.begin(), v.end());


    f(0,ev,v,n);

    return 0;
}