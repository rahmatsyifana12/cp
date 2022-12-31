#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define sza(a) ((int)a.size())
#define sortv(a) sort(a.begin(), a.end())
#define dbarr(a, m, n) for(int i=m; i<n; i++) cout << a[i] << ' '; cout << '\n';

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    sortv(v);

    if (v[n-1] == v[0]) {
        cout << 0 << ' ' << n*(n-1)/2 << '\n';
        return;
    }

    ll amin = 0;
    ll amax = 0;
    for (int i=0; i<n; i++) {
        if (v[i] == v[0]) amin++;
        if (v[i] == v[n-1]) amax++;
    }

    cout << v[n-1]-v[0] << ' ' << amin*amax << '\n';
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
