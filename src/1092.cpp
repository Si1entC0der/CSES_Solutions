#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void solve() {
    ll n, x; cin >> n;
    x = n * (n + 1) / 2;
    if (x % 2) cout << "NO\n";
    else {
        set<ll> s1, s2;
        cout << "YES\n";
        s1.insert(n);
        for (ll i = n - 1; i >= 2; i -= 4) {
            s2.insert(i);
            s2.insert(i - 1);
        }
        for (ll i = n - 3; i >= 2; i -= 4) {
            s1.insert(i);
            s1.insert(i - 1);
        }
        if (n % 2 == 0) s1.insert(1);
        cout << s1.size() << "\n";
        for (auto& it : s1) cout << it << " ";
        cout << '\n' << s2.size() << "\n";
        for (auto& it : s2) cout << it << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
