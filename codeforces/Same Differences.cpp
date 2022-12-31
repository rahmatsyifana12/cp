#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define sza(x) ((int)x.size())
#define sortv(a) sort(a.begin(), a.end())
#define dbarr(x, m, n) for(int i=m; i<n; i++) cout << x[i] << ' '; cout << '\n';

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    ll x;
    map<ll,ll> mp;
    for (int i=0; i<n; i++) {
        cin >> x;
        mp[x-i]++;
    }

    ll ans = 0;
    for (auto const& [key, val]: mp) {
        // cout << "key: " << key << "; val: " << val << '\n';
        if (key != 0) {
            ans += (ll)val*(val-1)/2;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
