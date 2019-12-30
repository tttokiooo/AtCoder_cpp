// https://atcoder.jp/contests/abs/tasks/abc083_b
#include <bits/stdc++.h>
using namespace std;

int sum_digit(int n) {
    int sum_v = 0;
    while (n > 0) {
        sum_v += n % 10;
        n /= 10;
    }
    return sum_v;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int sum_v = sum_digit(i);
        if (a <= sum_v && sum_v <= b) {
            ans += i;
        }
    }
    cout << ans << endl;

    return 0;
}