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
    for (int i=0; i<len; i++) {
        if (a[i] < 97) {
            a[i] += 32;
        }
    }

    for (int i=0; i<len; i++) {
        if (a[i] == 'a' || a[i] == 'i' || a[i] == 'u' || a[i] == 'e' || a[i] == 'o' || a[i] == 'y') {
            continue;
        }
        cout << '.' << a[i];
    }
    cout << '\n';
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
