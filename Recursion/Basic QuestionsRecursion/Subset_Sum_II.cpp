#include<bits/stdc++.h>
using namespace std;

int f(int idx, vector<int> ev, vector<int> v)
{
    for(auto it : ev)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    for(int i= idx;i<v.size();i++)
    {
        if(i!=idx && v[i]==v[i-1]) continue;

        ev.push_back(v[i]);
        f(i+1,ev,v);
        ev.pop_back();
    }

}


int main()
{
    int n = 0, x = 0;
    vector<int> v, ev;

    cout << "enter n value ";
    cin >> n;



    for (int i = 0; i < n; i++) {
        cout << "enter x value ";
        cin >> x;
        v.push_back(x);
    }

    
   f(0,ev,v);




    return 0;
}