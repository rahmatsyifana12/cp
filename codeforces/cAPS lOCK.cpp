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

string swapCase(string s) {
    for (int i=0; i<s.length(); i++) {
        if (s[i] <= 'Z') {
            s[i] += 32;
        } else {
            s[i] -= 32;
        }
    }

    return s;
}

void solve() {
    string a;
    cin >> a;

    bool c0;
    if (a[0] <= 'Z') c0 = true;
    else c0 = false;

    bool ac = true;
    for (int i=1; i<a.length(); i++) {
        if (a[i] >= 'a') {
            ac = false;
            break;
        }
    }

    if (c0 && ac || !c0 && ac) {
        a = swapCase(a);
    }

    cout << a << '\n';
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
