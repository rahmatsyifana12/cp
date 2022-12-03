#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(a) ((int)a.size())
#define all(a) (a).begin(), (a).end()
#define sortv(a) sort(a.begin(), a.end())
#define dbarr(a, m, n) for(int i=m; i<n; i++) cout << a[i] << ' '; cout << '\n';

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    vector<int>dp(1000005);
    int x;
    int s = 1;
    int sum = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        sum += x;
        for (int j=s; j<=sum; j++) {
            dp[j] = i+1;
        }
        s = sum+1;
    }

    int m;
    cin >> m;

    int y;
    for (int i=0; i<m; i++) {
        cin >> y;
        cout << dp[y] << '\n';
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
