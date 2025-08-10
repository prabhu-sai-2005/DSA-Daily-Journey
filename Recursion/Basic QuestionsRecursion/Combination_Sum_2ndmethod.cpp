#include <bits/stdc++.h>
using namespace std;

void f(int idx, vector<int> &ev, vector<int> &v, int n, int s,int sg) {
    if(s==sg) 
    { 
        cout << "[ ";
        for (auto it : ev)
        {
            cout << it << " ";
        }
        cout << "]\n";
        return;
    }

    if (idx == n || s>sg) 
    {
        return;
    }

    // Pick the current element
    ev.push_back(v[idx]);
    s=s+v[idx];
    f(idx, ev, v, n, s,sg); // stay at same idx (can reuse)

    ev.pop_back();
    s=s-v[idx];
    // Skip the current element
    f(idx+1, ev, v, n, s,sg);
}

int main() {
    int n = 0, x = 0, sg = 0,s=0;
    vector<int> v, ev;

    cout << "enter n value ";
    cin >> n;

    cout << "enter sg value ";
    cin >> sg;

    for (int i = 0; i < n; i++) {
        cout << "enter x value ";
        cin >> x;
        v.push_back(x);
    }

    f(0, ev, v, n,s,sg);

    return 0;
} 