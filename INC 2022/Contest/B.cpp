#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n;
    cin >> n;

    int d[n];
    for (int i=1; i<=n-1; i++) {
        cin >> d[i];
    }

    int A[n+5] = {0};
    int B[n+5] = {0};

    for (int i=1; i<=n; i++) {
        cin >> A[i];
    }

    for (int i=1; i<=n; i++) {
        cin >> B[i];
    }

    int time = 0;
    for (int i=n; i>=1; i--) {
        if (A[i] < B[i]) {
            if (A[i-1] >= B[i]-A[i]) {
                int beda = B[i]-A[i];
                A[i] += beda;
                A[i-1] -= beda;
                time += d[i-1] * beda;
            } else {
                cout << "-1\n";
                return;
            }
        }
    }

//    for (int i=1; i<=n; i++) {
//        cout << A[i] << ' ' << B[i] << '\n';
//    }

    cout << time << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
//    cin >> tc;
    for (int i = 1; i<=tc; i++) {
//        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
