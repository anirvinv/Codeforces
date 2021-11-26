#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    while (cin >> a)
    {

        cin >> b;
        if (__gcd(a, b) == 1)
        {
            cout << "Good choice" << endl;
        }

        else
        {
            cout << "Bad choice" << endl;
        }
    }
}