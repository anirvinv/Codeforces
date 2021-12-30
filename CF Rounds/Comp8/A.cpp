#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n % 3 == 0)
        {
            if (n % 2 == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
            count++;
        }
        if (n == 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}