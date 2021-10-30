#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
    int x = max(a, b);
    int y = min(a, b);
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);

    int numerator = 6 - mx + 1;
    int denom = 6;
    int gc = gcd(numerator, denom);
    numerator /= gc;
    denom /= gc;

    cout << numerator << "/" << denom << endl;
}