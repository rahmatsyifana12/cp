#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = (int)1e5+5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    int a[n+1];
    for (int i=0; i<n; i++) cin >> a[i];

    if (n == 1) {
        cout << "n == 1\n";
        cout << "YES\n";
        return;
    }

    int l = -1, r = -1;
    for (int i=1; i<n-1; i++) {
        if (a[i-1] > a[i]) {
            l = i;
        }
        if (a[i] < a[i+1]) {
            r = i;
        }
        if (l != -1 && r != -1 && l <= r && a[l] == a[r]) {
            cout << l << ' ' << r << '\n';
            cout << "INI DIA\n";
            cout << "YES\n";
            return;
        }
    }

    int naikf = -1;
    int skip = -1;
    l = 0;
    r = -1;
    for (int i=2; i<n-1; i++) {
        if (a[i] < a[0] && naikf == -1) {
            skip = 1;
        }
        if (skip == 1) continue;
        if (a[i] > a[0]) {
            naikf = 1;
            r = i-1;
            break;
        }
    }

    if (naikf == 1 && a[l] == a[r]) {
        cout << l << ' ' << r << '\n';
        cout << "NAIKF\n";
        cout << "YES\n";
        return;
    }

    skip = -1;
    int turunf = -1;
    r = n-1;
    l = -1;
    for (int i=n-3; i>=0; i--) {
        if (a[i] < a[n-1] && turunf == -1) {
            skip = 1;
        }
        if (skip == 1) continue;
        if (a[i] > a[n-1]) {
            turunf = 1;
            l = i+1;
            break;
        }
    }

    if (turunf == 1 && a[l] == a[r]) {
        cout << l << ' ' << r << '\n';
        cout << "TURUNF\n";
        cout << "YES\n";
        return;
    }

    cout << l << ' ' << r << '\n';
    cout << "NO\n";
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
