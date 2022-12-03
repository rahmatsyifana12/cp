#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    map<ll,ll> mp;
    ll t;
    for (int i=0; i<n; i++) {
        cin >> t;
        mp[t]++;
    }

    ll ans = 0;
    ans = mp[0]*(mp[0]-1)/2;

    for (int i=1; i<=10; i++) {
        ans += mp[i]*mp[-1*i];
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
