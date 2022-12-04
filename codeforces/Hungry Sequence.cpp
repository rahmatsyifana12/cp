#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define sortv(a) sort(a.begin(), a.end())
#define db_arr(x, m, n) for(int i=m; i<n; i++) cout << x[i] << ' '; cout << '\n';
#define pb push_back

const int MAX_N = (int)1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
          if(num % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << 2*n+i;
        if (i == n-1) cout << '\n';
        else cout << ' ';
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
