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

    int dp[5] = {0};
    int a[n+5];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        dp[a[i]]++;
    }
    // for (int i=0; i<5; i++) cout << dp[i] << ' ';

    int ans = dp[4];
    dp[4] = 0;
    // cout << "ans 1: " << ans << '\n';
    if (dp[3] > 0 && dp[1] > 0) {
        int mn = min(dp[3], dp[1]);
        // for (int i=1; i<=4; i++) cout << "dp" << i << ": " << dp[i] << "; ";cout << '\n';
        // cout << "mn: " << mn << '\n';
        ans += mn;
        dp[3] -= mn;
        dp[1] -= mn;
    }
    // cout << "ans 2: " << ans << '\n';

    if (dp[3] > 0) {
        ans += dp[3];
        dp[3] = 0;
    }
    // cout << "ans 3: " << ans << '\n';

    if (dp[2] >= 2) {
        int t = dp[2]/2;
        ans += t;
        int sisa = dp[2]%2;
        dp[2] = sisa;
        // cout << "sisa: " << sisa << '\n';
    }
    // cout << "ans 4: " << ans << '\n';

    if (dp[2] == 1) {
        if (dp[1] > 2) {
            dp[1] -= 2;
            ans++;
        } else {
            ans++;
            cout << ans << '\n';
            return;
        }
    } else {
        if (dp[1] > 0 && dp[1] <= 4) {
            ans++;
            cout << ans << '\n';
            return;
        } else {
            int t = dp[1]/4;
            ans += t;
            if (dp[1]%4 > 0) {
                ans++;
            }
            cout << ans << '\n';
            return;
        }
    }

    if (dp[1] > 0) {
        int t = dp[1]/4;
            ans += t;
            if (dp[1]%4 > 0) {
                ans++;
            }
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
