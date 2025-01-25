#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for (auto& it : v) cin >> it;
    ll dif = LLONG_MAX;
    for (ll i = 0; i < (1 << n); i++) {
        ll left = 0, right = 0;
        for (ll j = 0; j < n; j++) {
            ((1 << j) & i) ? left += v[j] : right += v[j];
        }
        dif = min(dif, abs(left - right));
    }
    cout << dif << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
