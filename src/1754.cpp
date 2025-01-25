#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void solve() {
    ll a, b; cin >> a >> b;
    ((a + b) % 3 == 0 && (abs(a - b) <= min(a, b))) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc; cin >> tc;
    while (tc--)
        solve();
    return 0;
}