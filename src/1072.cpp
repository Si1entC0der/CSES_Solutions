#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, total = 0, impossible = 0, possible = 0; cin >> n;
    for (ll i = 1; i <= n; i++) {
        total = ((i * i) * (i * i - 1)) / 2;
        possible = (i - 1) * (i - 2) * 4;
        impossible = total - possible;
        cout << impossible << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}