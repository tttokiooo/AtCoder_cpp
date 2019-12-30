// https://atcoder.jp/contests/abs/tasks/abc087_b
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;
    for (int i = 0; i <= a; i++) {
        if (x < 500 * i) break;
        for (int j = 0; j <= b; j++) {
            int rest = x - 500 * i - 100 * j;
            if (rest < 0) break;
            if (rest / 50 <= c) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}