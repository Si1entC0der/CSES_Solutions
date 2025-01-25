#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 1; i * i <= n; i++)
        if (n % i == 0) {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i);
        }

    cout << v.size() << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
