// https://atcoder.jp/contests/abs/tasks/abc088_b
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i <= n; i++) cin >> a[i];

    int ali = 0, bob = 0;
    sort(a, a+n, greater<int>());

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ali += a[i];
        } else {
            bob += a[i];
        }
    }
    cout << ali - bob << endl;

    return 0;
}