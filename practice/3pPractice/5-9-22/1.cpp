#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<int> arr(n);
    bool one = false;
    F(i, n) { cin >> arr[i]; one |= (arr[i] == 1); }
    sort(all(arr));
    // if we go modding by the largest element to the smallest element, we good. 
    // Except if there is already a 1 in the thing, then we have to change strats 
    // 1 4 7 1
    if (!one) {
        cout << "YES" << '\n';
        return;
    }

    F(i, n - 1) {
        if (arr[i + 1] - arr[i] == 1) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';

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