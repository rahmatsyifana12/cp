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
    int h, w;
    cin >> h >> w;

    int ans = 0;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char s;
            cin >> s;
            if (s == '#') ans++;
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
