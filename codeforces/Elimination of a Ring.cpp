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

    int arr[n+1];
    int t1;
    int t2;
    int t2a = 0;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    if (n <= 3) {
        cout << n << '\n';
        return;
    }

    for (int i=0; i<n; i++) {
        if (i == 0) t1 = arr[i];
        else {
            if (arr[i] != t1 && t2a == 0) {
                t2a = 1;
                t2 = arr[i];
            }
            if (t2a == 1 && arr[i] != t1 && arr[i] != t2) {
                cout << n << '\n';
                // cout << "lebih dari 3\n";
                return;
            }
        }
    }

    cout << n/2+1 << '\n';
    // cout << "kurang dari sama dengan 3\n";
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
