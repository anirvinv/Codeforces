#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        cout << (k % n == 0 ? n : k % n) << '\n';
    } else {
        int ans = (k + (k - 1) / (n / 2)) % n;

        cout << (ans == 0 ? n : ans) << '\n';
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