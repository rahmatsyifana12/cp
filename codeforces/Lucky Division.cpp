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

int dp[1001] = {0};

void solve() {
    int a;
    cin >> a;
    for (int i=1; i<=a; i++) {
        int luc = 1;
        int x = i;
        while (x > 0) {
            int t = x%10;
            if (t != 7 && t != 4) {
                luc = 0;
                break;
            }
            x /= 10;
        }
        if (luc == 1) dp[i] = 1;
    }

    // for (int i=1; i<=a; i++) cout << i << ' ' << dp[i] << '\n';

    if (dp[a] == 1) {
        cout << "YES\n";
        return;
    }

    for (int i=1; i<=a; i++) {
        if (dp[i] == 1 && a%i == 0) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";

    // for (int i=1; i<=a; i++) {
    //     cout << dp[i] << ' ';
    // }

    // while (n > 0) {
    //     int t = n%10;
    //     if (t != 7 && t != 4) {
    //         cout << "NO\n";
    //         return;
    //     }
    //     n /= 10;
    // }

    // cout << "YES\n";
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
