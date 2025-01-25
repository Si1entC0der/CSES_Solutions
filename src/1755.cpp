#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin >> s;
    map<char, int> mp;
    for (auto& ch : s)
        mp[ch]++;
    int oSum = 0;
    for (auto& it : mp)
        if (it.second & 1) oSum++;

    if (oSum > 1) cout << "NO SOLUTION\n";
    else {
        vector<char> v;
        for (auto& it : mp) {
            if (!(it.second & 1)) {
                for (ll i = 0; i < it.second / 2; i++) {
                    cout << it.first;
                    v.push_back(it.first);
                }
            }
        }
        for (auto& it : mp) {
            if (it.second & 1) {
                for (ll i = 0; i < it.second; i++) cout << it.first;
            }
        }
        reverse(v.begin(), v.end());
        for (auto& it : v) cout << it;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
