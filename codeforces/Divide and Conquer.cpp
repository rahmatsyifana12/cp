#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define sza(x) ((int)x.size())
#define sortv(a) sort(a.begin(), a.end())
#define dbarr(x, m, n) for(int i=m; i<n; i++) cout << x[i] << ' '; cout << '\n';

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    int min_ganjil = INT_MAX;
    int min_genap = INT_MAX;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] < min_ganjil && a[i]%2 == 1) {
            min_ganjil = a[i];
        }
        if (a[i] < min_genap && a[i]%2 == 0) {
            min_genap = a[i];
        }
    }

    if (sum%2 == 0) {
        cout << "0\n";
        return;
    }

    int sum_ganjil = 0;
    while (min_ganjil%2 != 0) {
        min_ganjil /= 2;
        sum_ganjil++;
        // cout << "min_ganjil: " << min_ganjil << '\n';
    }

    if (min_genap == INT_MAX) {
        cout << sum_ganjil << '\n';
        return;
    }

    int sum_genap = 0;
    while (min_genap%2 != 1) {
        min_genap /= 2;
        sum_genap++;
        // cout << "min_ganjil: " << min_ganjil << '\n';
    }

    int ans = min(sum_ganjil, sum_genap);
    cout << ans << '\n';
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
