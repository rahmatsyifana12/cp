#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n, p, x;
    cin >> n >> p >> x;

    ll d[n+5];
    ll sum_d = 0;
    for (int i=0; i<n; i++) {
        cin >> d[i];
        sum_d += d[i];
    }

    if (sum_d <= 0 && p < x) {
        cout << "-1\n";
        return;
    }

    ll val = p;
    ll minn = INF;
    ll minn_x = INF;
    int a = 0;
    while (1) {
        for (int i=0; i<n; i++) {
            val += d[i];
            if (val < minn) {
                minn = val;
            }
            if (val < minn_x && val >= x) {
                minn_x = val;
            }
        }
        if (minn < minn_x) {
            cout << minn_x << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
//    cin >> tc;
    for (int i = 1; i<=tc; i++) {
//        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
