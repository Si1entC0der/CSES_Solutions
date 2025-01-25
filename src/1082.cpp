#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;

ll fn(ll n) {
    return ((n % N) * ((n + 1) % N) / 2) % N;
}

void solve() {
    ll n, sum = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++) {
        ll j = n / (n / i);
        sum += (n / i) % N * (fn(j) - fn(i - 1) + N) % N;
        sum %= N;
        i = j;
    }

    cout << sum << "\n";
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