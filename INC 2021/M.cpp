#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define sortv(a) sort(a.begin(), a.end())
#define mp make_pair
#define pb push_back
#define dbarr(x, n) for (int i=0; i<n; i++) cout << x[i] << ' '; cout << '\n';

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    ll k, s, n;
    cin >> k >> s >> n;

    if (n < k*s) {
        cout << "NO\n";
        return;
    }

    if (s == 1) {
        if (n <= k*2-2 || n%2 == 0) cout << "YES\n";
        else cout << "NO\n";
        return;
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
