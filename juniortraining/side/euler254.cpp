#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

map<ll, ll> mp;

ll factorial(ll n)
{
    if (mp.find(n) != mp.end())
    {
        return mp[n];
    }
    ll ans = n;
    while (n-- > 1)
    {
        ans *= n;
    }
    mp[n] = ans;
    return ans;
}
ll f(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return sum;
}
ll sf(ll n)
{
    ll num = f(n);
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
ll g(ll i)
{
    int n = 1;
    while (sf(n) != i)
    {
        n++;
    }
    return n;
}

int sg(ll i)
{
    ll num = g(i);
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int s(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sg(i);
    }
    return sum;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << "s(" << i << ")"
             << ": " << s(i) << endl;
    }
}
