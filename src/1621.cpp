#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    set <ll> st;
    for (ll i = 0; i < n; i++) {
        ll it; cin >> it;
        st.insert(it);
    }
    cout << st.size() << "\n";
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