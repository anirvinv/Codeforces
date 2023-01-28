#include <bits/stdc++.h>
#include <stdio.h>

#include <cmath>
#include <iostream>
#include <numeric>

using namespace std;
typedef long long int ll;
typedef long double ld;
#define N 200020
#define pi 3.141592653589793238462
#define r(n) \
    ll n;    \
    cin >> n;
#define s(n)  \
    string n; \
    cin >> n;
#define mp(i, j) make_pair(i, j)
#define pb(i) push_back(i)
#define pl pair<ll, ll>
#define f(i, s, e, inc) for (ll i = s; i < e; i += inc)
#define fd(i, s, e, dec) for (ll i = s; i >= e; i -= dec)
#define p(x) cout << x << '\n'
#define MOD 1000000007
#define otherMOD 998244353
#define tf(x)                  \
    if (x)                     \
        cout << "Yes" << '\n'; \
    else                       \
        cout << "No" << '\n';
#define L 20

void readArr(ll arr[], ll size) {
    for (ll i = 0; i < size; i++) cin >> arr[i];
}

void printArray(ll arr[], ll size) {
    for (ll i = 0; i < size; i++) cout << arr[i];
    cout << '\n';
}

void printVector(vector<ll> &v) {
    for (ll i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << '\n';
}

void solve() {
    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp1;
    map<ll, ll> mp2;
    vector<pair<ll, ll>> v1;
    vector<pair<ll, ll>> v2;
    f(i, 0, n, 1) {
        ll x, y;
        cin >> x >> y;
        if (x > 0)
            mp1[x] += y;
        else if (x < 0)
            mp2[-1 * x] += y;
    }

    for (auto a : mp1) v1.pb(mp(a.first, a.second));
    for (auto a : mp2) v2.pb(mp(a.first, a.second));
    ll ans = 0;
    ll carryover = 0;
    ll carrycost = 0;

    fd(i, v1.size() - 1, 0, 1) {
        if (carryover != 0) {
            ll want = k - carryover;
            ll sub = min(v1[i].second, want);
            v1[i].second -= sub;
            carryover += sub;
            if (carryover == k) {
                carryover = 0;
                ans += 2 * carrycost;
            }
        }
        if (v1[i].second == 0) continue;

        ll turns = v1[i].second / k;
        ans += 2 * turns * v1[i].first;
        carryover = v1[i].second % k;
        if (carryover != 0) {
            carrycost = v1[i].first;
        }
    }
    ans += 2 * carrycost;
    carrycost = 0;
    carryover = 0;
    if (v2.size()) {
        fd(i, v2.size() - 1, 0, 1) {
            if (carryover != 0) {
                ll want = k - carryover;
                ll sub = min(v2[i].second, want);
                v2[i].second -= sub;
                carryover += sub;
                if (carryover == k) {
                    carryover = 0;
                    ans += 2 * carrycost;
                }
            }
            if (v2[i].second == 0) continue;

            ll turns = v2[i].second / k;
            ans += 2 * turns * v2[i].first;
            carryover = v2[i].second % k;
            if (carryover != 0) {
                carrycost = v2[i].first;
            }
        }
    }

    ans += 2 * carrycost;
    p(ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll sus = 1;
    // cin >> sus;
    f(i, 0, sus, 1) solve();
}