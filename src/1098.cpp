#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x_or = 0;
    cin >> n;
    vector<ll> v(n);
    for (auto& it : v) cin >> it, x_or ^= (it % 4);
    x_or ? cout << "first\n" : cout << "second\n";
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