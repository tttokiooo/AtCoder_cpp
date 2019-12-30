// https://atcoder.jp/contests/abs/tasks/abc081_b
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i; i < n; i++) cin >> a[i];

    int div = 2;
    int ans = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] % div != 0) {
                cout << ans << endl;
                exit(0);
            }
        }
        div *= 2;
        ans++;
    }
    
    return 0;
}