#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    int total = n * k;
    int odds = (total + 1) / 2;
    int evens = total - odds;

    if (odds % k == 0 && evens % k == 0) {
        cout << "YES" << '\n';
        int count = 0;
        for (int i = 1; i <= total; i += 2) {
            cout << i << ' ';
            count++;
            if (count % k == 0) {
                cout << '\n';
            }
        }
        count = 0;
        for (int i = 2; i <= total; i += 2) {
            cout << i << ' ';
            count++;
            if (count % k == 0) {
                cout << '\n';
            }
        }
    } else {
        cout << "NO" << '\n';
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