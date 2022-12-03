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
    int l, r, x;
    cin >> l >> r >> x;

    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "0\n";
        return;
    }
    if (abs(a-b) >= x) {
        cout << "1\n";
        return;
    }

    if (a < b) {
        if (abs(a-l) >= x) {
            cout << "2\n";
            return;
        }
        if (abs(a-r) >= x && abs(b-r) >= x) {
            cout << "2\n";
            return;
        }
    } else {
        if (abs(a-r) >= x) {
            cout << "2\n";
            return;
        }
        if (abs(a-l) >= x && abs(b-l) >= x) {
            cout << "2\n";
            return;
        }
    }

    if (a < b) {
        if (abs(a-r) >= x) {
            if (abs(l-b) >= x) {
                cout << "3\n";
                return;
            }
        }
    } else {
        if (abs(a-l) >= x) {
            if (abs(r-b) >= x) {
                cout << "3\n";
                return;
            }
        }
    }

    cout << "-1\n";
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
