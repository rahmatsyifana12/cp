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
    int m, s;
    cin >> m >> s;

    int a[55];
    int dp[10000] = {0};
    int n = -1;
    for (int i=0; i<m; i++) {
        cin >> a[i];
        dp[a[i]] = 1;
        if (a[i] > n) {
            n = a[i];
        }
    }

    int sum = 0;
    for (int i=1; i<=n; i++) {
        if (dp[i] == 0) {
            sum += i;
        }
    }
    if (sum > s) {
        cout << "NO\n";
        return;
    }
    if (sum < s) {
        int x = n+1;
        while (sum < s) {
            sum += x;
            x++;
        }
    }
    if (sum > s) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
