#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int N = 32768;
    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    F(i, n) {
        int m = 0;
        int twos = 0;
        // if its odd, then +1 to increase number of twos by 1
        if (a[i] == 0) {
            cout << 0 << ' ';
            continue;
        }
        if (a[i] % 2 == 1) {
            // make it even
            a[i] = (a[i] + 1) % N;
            m++;
            if (a[i] == 0) {
                cout << m << ' ';
                continue;
            }
        }
        // even and divisible by N
        if (a[i] % N == 0) {
            cout << m + 1 << ' ';
            continue;
        }

        // a[i] is even
        int temp = a[i];
        // we need 15 twos
        while (temp && temp % 2 == 0) {
            twos++;
            temp /= 2;
        }
        if (twos >= 15) {
            // this should NEVER HAPPEN
            // set equal to 2 * v mod N
            cout << m + 1 << ' ';
        } else {
            if (a[i] > N) {
                // greater than N and even
                a[i] = (2 * a[i]) % N;
                twos++;
                m++;
            }
            int x = N - a[i];
            cout << min(15 - twos + m, x + m) << ' ';
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}