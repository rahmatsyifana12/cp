
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;

void solve() {
    int a = 1;
    int b = 1;

    vector<int> v;
    for (int i=1; i<30; i++) {
        for (int j=i+1; j<30; j++) {
            int x = j*j - i*i;
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());

    vector<int> new_v;
    new_v.push_back(v[0]);
    for (int i=1; i<v.size(); i++) {
        if (v[i] != v[i-1]) {
            new_v.push_back(v[i]);
        }
    }

    for (int i=1; i<new_v.size(); i++) {
//        cout << new_v[i] << '\n';
        cout << new_v[i] - new_v[i-1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
