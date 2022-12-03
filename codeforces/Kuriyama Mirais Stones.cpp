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
    int n;
    cin >> n;

    vector<ll> a1(n+2);
    vector<ll> a2(n+2);
    vector<int> v;

    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        v.push_back(x);
        a1[i+1] = a1[i]+x;
    }

    sort(v.begin(), v.end());
    for (int i=0; i<n; i++) {
        a2[i+1] = a2[i]+v[i];
    }

    int q;
    cin >> q;
    int t, l, r;
    while (q--) {
        cin >> t >> l >> r;
        if (t == 1) {
            cout << a1[r]-a1[l-1] << '\n';
        } else {
            cout << a2[r]-a2[l-1] << '\n';
        }
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
