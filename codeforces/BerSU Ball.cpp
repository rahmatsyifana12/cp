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
    int n;
    cin >> n;

    int a[n+1];
    for (int i=0; i<n; i++) cin >> a[i];

    int m;
    cin >> m;

    int b[m+1];
    for (int i=0; i<m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int x = 0, y = 0;
    int ans = 0;
    while (x < n && y < m) {
        if (abs(a[x]-b[y]) <= 1) {
            x++;
            y++;
            ans++;
            continue;
        }
        if (a[x] > b[y]) {
            y++;
            continue;
        }
        if (a[x] < b[y]) {
            x++;
            continue;
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
