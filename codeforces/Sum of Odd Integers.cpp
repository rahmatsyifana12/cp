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
    int n, k;
    cin >> n >> k;

    // cout << "sqrt: " << sqrt(n) << '\n';
    if (n%2 == 0) {
        if (k%2 == 1) {
            cout << "NO\n";
            return;
        }
        int a = sqrt(n);
        if (k <= a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        if (k%2 == 0) {
            cout << "NO\n";
            return;
        }
        int a = sqrt(n);
        if (k <= a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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
