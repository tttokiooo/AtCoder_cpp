// https://atcoder.jp/contests/abs/tasks/abc086_a
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a * b % 2 != 0 ? "Odd" : "Even") << endl;
    return 0;
}