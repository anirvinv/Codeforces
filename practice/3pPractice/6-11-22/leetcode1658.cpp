#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n);
    G(x);
    vector<int> a(n);
    int sum = 0;
    F(i, 0, n) {
        cin >> a[i];
        sum += a[i];
    }
    int l = 0, r = 0;
    int temp = 0;
    int size = -1;
    if (sum < x) {
        cout << "-1\n";
        return;
    }
    while (r < n) {
        if (temp < sum - x) {
            temp += a[r];
            r++;
        }
        else if (temp > sum - x) {
            temp -= a[l];
            l++;
        }
        else {
            size = max(size, r - l);
            temp += a[r];
            r++;
        }
    }
    while (temp > sum - x) {
        temp -= a[l];
        l++;
    }
    if (temp == sum - x) {
        size = max(size, r - l);
    }
    cout << n - size << '\n';

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