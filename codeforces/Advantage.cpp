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
    int b[n+1];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n);
    int max1 = b[n-1];
    int max2 = b[n-2];

    for (int i=0; i<n; i++) {
        if (a[i] != max1) {
            cout << a[i]-max1;
        } else {
            cout << a[i]-max2;
        }
        if (i != n-1) cout << ' ';
        else cout << '\n';
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
