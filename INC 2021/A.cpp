#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define bend(a) a.begin(), a.end()

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    int a[1001] = {0};
    int sum = 0;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        // cout << x << '\n';
        if (x < 0) {
            if (a[-1*x] == 0) {
                sum++;
            } else {
                a[-1*x] = 0;
            }
        } else {
            a[x] = 1;
        }
    }
    cout << sum << '\n';
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
