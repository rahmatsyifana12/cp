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

void solve2() {
    int n;
    cin >> n;

    ll a[n+1];
    a[0] = 0;
    ll ori[n+1];
    ori[0] = 0;
    bool sorted = true;
    bool r_sorted = true;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        if (i > 1) {
            if (a[i] < a[i-1]) sorted = false;
            if (a[i] > a[i-1]) r_sorted = false;
        }
        ori[i] = a[i];
    }

    if (sorted) {
        cout << "yes\n1 1\n";
        return;
    }
    if (r_sorted) {
        cout << "yes\n1 " << n << '\n';
        return;
    }

    int st_naik, dah_naik = 0;
    int st_turun, dah_turun = 0;
    for (int i=1; i<=n-1; i++) {
        if (a[i+1] > a[i] && dah_naik == 0 && dah_turun == 1) {
            st_naik = i;
            dah_naik++;
        }
        if (a[i+1] < a[i] && dah_turun == 0) {
            st_turun = i;
            dah_turun++;
        }
    }

    ll temp[n+1];
    temp[0] = 0;
    for (int i=1; i<=n; i++) temp[i] = a[i];

    sort(ori, ori+n+1);
    if (dah_turun == 1 && dah_naik == 0) {
        // cout << "DAHLAH\n";
        sort(temp+st_turun, temp+n+1);
        for (int i=1; i<=n; i++) {
            if (temp[i] != ori[i]) {
                cout << "no\n";
                return;
            }
        }
        cout << "yes\n";
        cout << st_turun << ' ' << n << '\n';
        return;
    }

    sort(a+st_turun, a+st_naik+1);

    for (int i=1; i<=n; i++) {
        if (a[i] != ori[i]) {
            cout << "no\n";
            return;
        }
    }

    cout << "yes\n";
    cout << st_turun << ' ' << st_naik  << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << ": ";
        solve2();
    }
}
