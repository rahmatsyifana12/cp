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
    int n, l;
    cin >> n >> l;

    int a[n+1];
    for (int i=0; i<n; i++) cin >> a[i];

    sort(a, a+n);

    int max = (a[0]-0)*2;
    int dif = 0;
    for (int i=1; i<n; i++) {
        dif = a[i]-a[i-1];
        if (dif > max) {
            max = dif;
        }
    }

    if (2*(l-a[n-1]) > max) max = 2*(l-a[n-1]);
    printf("%.10lf\n", (double)max/2);
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
