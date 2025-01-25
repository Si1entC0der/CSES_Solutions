#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    ll ans;
    if (n < m)
        ans = (m % 2) ? m * m - n + 1 : (m - 1) * (m - 1) + n;
    else
        ans = (n % 2) ? (n - 1) * (n - 1) + m : n * n - m + 1;

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
