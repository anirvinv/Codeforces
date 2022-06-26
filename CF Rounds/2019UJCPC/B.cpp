#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
bool isPrime(int n)
{
    for (int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}