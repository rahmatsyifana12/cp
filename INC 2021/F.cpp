#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(a) ((int)a.size())
#define sortv(a) sort(a.begin(), a.end())
#define dbarr(a, m, n) for (int i=m; i<n; i++) cout << a[i] << ' '; cout << '\n';

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool isPalin(string s) {
    for (int i=0, j=sza(s)-1; i<sza(s)/2; i++, j--) {
        if (s[i] != s[j]) return false;
    }
    return true;
}

void solve() {
    string s;
    cin >> s;

    if (sza(s) == 2) {
        cout << s[0] << ' ' << s[1] << '\n';
        return;
    }

    int n = sza(s);
    int pivot;
    for (int i=0; i<n-1; i++) {
        pivot = i+1;
        string kiri = "";
        for (int j=0; j<pivot; j++) {
            kiri += s[j];
        }

        string kanan = "";
        for (int j=pivot; j<n; j++) {
            kanan += s[j];
        }

        if (isPalin(kiri) && isPalin(kanan)) {
            cout << kiri << ' ' << kanan << '\n';
            return;
        }
    }
    cout << "NO\n";
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
