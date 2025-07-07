#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);

    map<ll, int> mp;
    for (auto i = 0; i < n; i++) {
        cin >> v[i];
        ll needed = x - v[i];
        if (mp.count(needed)) {
            cout << mp[needed] + 1 << " " << i + 1 << "\n";
            return;
        }
        mp[v[i]] = i;
    }

    cout << "IMPOSSIBLE\n";
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