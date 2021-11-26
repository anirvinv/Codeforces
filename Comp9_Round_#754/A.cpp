#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int k = (a + c - 2 * b) / 3;
        int k1 = 0;
        int k2 = 0;
        if ((a + c - 2 * b) < 0)
        {
            k1 = (a + c - 2 * b - 2) / 3;
            k2 = (a + c - 2 * b) / 3;
        }
        else
        {
            k1 = (a + c - 2 * b + 2) / 3;
            k2 = (a + c - 2 * b) / 3;
        }
        cout << min(abs(a + c - 2 * b - 3 * k1), abs(a + c - 2 * b - 3 * k2)) << endl;
    }
}