#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];
    ll xOcc = 1;
    ll sum = 0;
    int loop = 0;
    int shit = -1;
    while (true) {
        if (loop >= 1) {
            xOcc *= x;
        }
        fo(i, n) {
            if (i == shit) {
                break;
            }
            if (loop == 0) {
                sum += arr[i];
            } else {
                sum += xOcc * arr[i];
            }
        }
        if (shit != -1) {
            break;
        }

        fo(i, n) {
            if (arr[i] % x != 0) {
                shit = i;
                break;
            } else {
                arr[i] /= x;
            }
        }
        loop++;
    }
    cout << sum << '\n';
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
