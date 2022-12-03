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

    int a[n+5];
    int dp[100005] = {0};
    for (int i=0; i<n; i++) {
        cin >> a[i];
        dp[a[i]]++;
    }

    for (int i=1; i<=100000; i++) {
        dp[i] += dp[i-1];
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        if (x >= 100000) {
            cout << n << '\n';
            continue;
        }
        cout << dp[x] << '\n';
    }
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
