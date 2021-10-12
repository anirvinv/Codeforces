#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n, k;

    cin >> n >> k;

    if (k % n == 0)
    {
        cout << k / n << endl;
    }
    else
    {
        cout << k / n + 1 << endl;
    }
}
