#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m, k, cnt = 0; cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (auto& it : a) cin >> it;
    for (auto& it : b) cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (!a.empty() and !b.empty()) {
        if (abs(a[a.size() - 1] - b[b.size() - 1]) <= k) cnt++, a.pop_back(), b.pop_back();
        else a[a.size() - 1] > b[b.size() - 1] ? a.pop_back() : b.pop_back();
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}