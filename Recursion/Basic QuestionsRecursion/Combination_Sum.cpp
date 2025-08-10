#include <bits/stdc++.h>
using namespace std;

void f(int idx, vector<int> &ev, vector<int> &v, int n, int sg) {
    if (sg == 0)
    { 
        cout << "[ ";
        for (auto it : ev) {
            cout << it << " ";
        }
        cout << "]\n";
        return;
    }

    if (idx == n || sg < 0) { // Out of bounds or sum exceeded
        return;
    }

    // Pick the current element
    ev.push_back(v[idx]);
    f(idx, ev, v, n, sg - v[idx]); // stay at same idx (can reuse)
    ev.pop_back();

    // Skip the current element
    f(idx + 1, ev, v, n, sg);
}

int main() {
    int n = 0, x = 0, sg = 0;
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

    f(0, ev, v, n, sg);

    return 0;
}
