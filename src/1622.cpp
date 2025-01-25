#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << '\n';
    for (auto& it : v) cout << it << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
