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
    int n, k;
    cin >> n >> k;

    int a[n+2];
    int dp[n+2] = {0};
    for (int i=0; i<n; i++) {
        cin >> a[i];
        dp[i+1] += dp[i]+a[i];
    }

    // for (int i=0; i<n+1; i++) cout << dp[i] << ' ';

    ll min_sum = LLONG_MAX;
    int idx = -1;
    for (int i=1; i<=n-k+1; i++) {
        ll t = dp[i+k-1]-dp[i-1];
        // cout << t << ' ';
        if (t < min_sum) {
            min_sum = t;
            idx = i;
        }
    }

    cout << idx << '\n';
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
