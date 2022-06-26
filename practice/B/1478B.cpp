#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int q, d;
    cin >> q >> d;
    vector<ll> arr(q);
    fo(i, q) { cin >> arr[i]; }
    fo(i, q) {
        int a = arr[i];
        if (a < d) {
            cout << "NO" << '\n';
            continue;
        } else if (a % d == 0 || a >= (10 * d + 9)) {
            cout << "YES" << '\n';
            continue;
        }
        int temp = a;
        bool found = false;

        while (temp > 0) {
            if (temp % 10 == d) {
                cout << "YES" << '\n';
                found = true;
                break;
            }
            temp /= 10;
        }
        if (!found) {
            while (a > 0) {
                a -= d;
                if (a % 10 == 0 || (a >= 10 * d && a <= 10 * d + 9)) {
                    cout << "YES" << '\n';
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "NO" << '\n';
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        solve();
    }
}