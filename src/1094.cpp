#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector <ll> v(n);
    ll mx = 0, ans = 0;
    for (auto& it : v) {
        cin >> it;
        mx = max(mx, it);
        if (it < mx) ans += mx - it;
    }
    cout << ans << "\n";
}

int main() {
    solve();
    return 0;
}