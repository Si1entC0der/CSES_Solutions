#include <bits/stdc++.h>
using namespace std;
#define ll long long

void toh(int n, int a, int b, int c) {
    if (n > 0) {
        toh(n - 1, a, c, b);
        cout << a << " " << c << "\n";
        toh(n - 1, b, a, c);
    }
}

void solve() {
    ll n;
    cin >> n;
    cout << (1ll << n) - 1 << "\n";

    toh(n, 1, 2, 3);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t; 
    while (t--)
        solve();
    return 0;
}
