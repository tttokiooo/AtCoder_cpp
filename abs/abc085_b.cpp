// https://atcoder.jp/contests/abs/tasks/abc085_b
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int d;
    set<int> d_set;
    for (int i = 0; i < n; i++) {
        cin >> d;
        d_set.insert(d);
    }
    cout << d_set.size() << endl;

    return 0;
}