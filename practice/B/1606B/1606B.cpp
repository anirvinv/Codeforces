#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        n--;
        if (n > 0) {
            ll initSum = (1 << (ll)(log2(k) + 1)) - 1;
            if (n == initSum) {
                cout << (ll)log2(k) + 1 << '\n';
            } else if (n > initSum) {
                n -= initSum;
                cout << (ll)log2(k) + 1 + (n + k - 1) / k << '\n';
            } else {
                cout << (int)(log2(n + 1) + 1) << '\n';
            }
        } else {
            cout << 0 << '\n';
        }
    }
}