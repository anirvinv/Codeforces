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
#define p(x) std::cout << x << '\n'
#define MOD 1000000007
// #define MOD 998244353
#define tf(x)                  \
    if (x)                     \
        cout << "Yes" << '\n'; \
    else                       \
        cout << "No" << '\n';
#define L 20

/*  cout << fixed << setprecision(10);  */

void readArr(ll arr[], ll size) {
    for (ll i = 0; i < size; i++) cin >> arr[i];
}

void printArray(ll arr[], ll size) {
    for (ll i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

void printVector(vector<ll>& v) {
    for (ll i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << '\n';
}

void printSet(set<ll>& s) {
    for (auto ptr = s.begin(); ptr != s.end(); ptr++) cout << (*ptr) << " ";
    cout << '\n';
}

void printMap(map<ll, ll>& mp) {
    for (auto it : mp) cout << it.first << " " << it.second << '\n';
    cout << '\n';
}

bool works(ll cheap[], ll time[], vector<ll>& pfs, ll have, ll place, ll n) {
    if (place == 1) {
        // either beat every1 or beat first guy and lose to 1 other guy
        ll need = time[n - place];
        ll need2beat = n - place - 1;
        ll add = 0;

        if (need2beat > 0) {
            add = pfs[need2beat];
            if (cheap[need2beat - 1] >= time[n - place]) {
                add -= time[n - place];
                add += cheap[need2beat];
            }
        }

        if (need + add <= have)
            return true;
        else
            return false;

    } else if (place == n + 1)
        return true;
    else {
        // Beat the current place guy, who wins n-place battles
        ll need = time[n - place];
        ll need2beat = n - place - 1;
        ll add = 0;

        if (need2beat > 0) {
            add = pfs[need2beat];
            if (cheap[need2beat - 1] >= time[n - place]) {
                add -= time[n - place];
                add += cheap[need2beat];
            }
        }

        if (need + add <= have) return true;

        // Lose to that guy

        add = 0;
        need = 0;
        need2beat = n - place + 1;

        if (need2beat > 0) {
            add = pfs[need2beat];
            if (cheap[need2beat - 1] >= time[n - place]) {
                add -= time[n - place];
                add += cheap[need2beat];
            }
        }

        if (need + add <= have) return true;

        return false;
    }
}

ll bsBG(ll l, ll r, ll cheap[], ll time[], vector<ll>& pfs, ll have,
        ll n)  // Binary Search [Bad, Good]
{
    while (r - l > 1) {
        ll m = (l + r) / 2;
        if (works(cheap, time, pfs, have, m, n)) {
            r = m;
        } else {
            l = m;
        }
    }
    return r;
}

void susmongus() {
    ll n, m;
    cin >> n >> m;
    ll a[n];
    readArr(a, n);
    ll cheap[n];
    f(i, 0, n, 1) cheap[i] = a[i];
    sort(cheap, cheap + n);
    vector<ll> pfs;
    pfs.pb(0);
    for (auto it : cheap) pfs.pb(pfs.back() + it);

    ll ans = bsBG(0, n + 1, cheap, a, pfs, m, n);
    p(ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll sus = 1;
    cin >> sus;
    f(i, 0, sus, 1) susmongus();
}