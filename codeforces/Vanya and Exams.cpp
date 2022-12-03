#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() {
    ll n, r, avg;
    cin >> n >> r >> avg;

    vector<pair<int,int>> v;
    int a, b;
    ll sum = 0;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        sum += a;
    }

    if (sum >= avg*n) {
        cout << 0 << '\n';
        return;
    }

    sort(v.begin(), v.end(), sortbysec);
    // for (int i=0; i<n; i++) cout << v[i].first << ' ' << v[i].second << '\n';
    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (v[i].first == r) {
            continue;
        }
        if (avg*n-sum > r-v[i].first) {
            sum += r-v[i].first;
            ans += (r-v[i].first)*v[i].second;
        } else {
            ans += (avg*n-sum)*v[i].second;
            cout << ans << '\n';
            return;
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
