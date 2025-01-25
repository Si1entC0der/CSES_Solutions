#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void solve() {
    ll n, ans = 0; cin >> n;
    for (ll i = 5; i <= n; i *= 5)
        ans += (n / i);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}