#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, x;
    cin >> n >> x;
    vector <ll> v(n);
    for (auto& it : v) cin >> it;
    sort(v.begin(), v.end());
    ll cnt = 0, i = 0, j = n - 1;
    while (i <= j) {
        ll sum = v[j];
        if (sum + v[i] <= x) sum += v[i++];
        cnt++, j--;
    }
    cout << cnt << "\n";
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
