#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define sortv(a) sort(a.begin(), a.end())
#define db_arr(x, n) for(int i=0; i<n; i++) cout << x[i] << ' '; cout << '\n';

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    ll k;
    cin >> k;

    ll dp[MAX_N] = {0};
    dp[1] = 1;
    int i = 2;
    while (1) {
        dp[i] = i*dp[i-1];
        cout << dp[i] << '\n';
        if (dp[i]%k == 0) {
            cout << i << '\n';
            return;
        }
        i++;
    }

    // ll x = 1;
    // for (int i=1; i<=66; i++) {
    //     x = x*i;
    //     cout << i << ' ' << x << '\n';
    // }
    // cout << x << '\n';
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
