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
    string a;
    cin >> a;
    int len = a.length();

    int t = 0;
    for (int i=0; i<len; i++) {
        if (t == 0) {
            if (a[i] == 'h') {
                t++;
            }
        } else if (t == 1) {
            if (a[i] == 'e') {
                t++;
            }
        } else if (t == 2) {
            if (a[i] == 'l') {
                t++;
            }
        } else if (t == 3) {
            if (a[i] == 'l') {
                t++;
            }
        } else if (t == 4) {
            if (a[i] == 'o') {
                t++;
                break;
            }
        }
    }

    if (t == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
