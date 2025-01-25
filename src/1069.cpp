#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s; cin >> s;
    int len = s.length(), mx = 0, cnt = 0;
    for (int i = 1; i < len; i++)
        (s[i] == s[i - 1]) ? cnt++, mx = max(mx, cnt), cnt = 0;
    cout << mx + 1 << "\n";
    return 0;
}