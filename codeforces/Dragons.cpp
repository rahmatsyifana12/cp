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
    ll s, n;
    cin >> s >> n;

    vector<pair<ll,ll>> v;
    ll a, b;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        v.pb(make_pair(a, b));
    }

    sortv(v);

    for (int i=0; i<n; i++) {
        if (s <= v[i].first) {
            cout << "NO\n";
            return;
        }
        s += v[i].second;
    }

    cout << "YES\n";
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
