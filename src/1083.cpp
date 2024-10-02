#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll n,xum=0; cin>>n;
    for(int i=1; i<=n; i++) xum^=i;
    for(int i=1; i<n; i++) {
        int x; cin>>x;
        xum^=x;
    }
    cout<<xum<<"\n";
    return;
}
 
int main() {
    solve();
    return 0;
} 