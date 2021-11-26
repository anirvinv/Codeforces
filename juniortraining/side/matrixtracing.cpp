#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n;
    while (--n)
    {
        ans *= n;
    }
    return ans;
}

int choose(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    cout << choose(5, 5);
}