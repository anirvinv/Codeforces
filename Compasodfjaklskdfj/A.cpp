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
        bool divisible = false;
        int count = 2;
        while (!divisible)
        {
            int i = (1 << count) - 1;
            if (n % i == 0)
            {
                divisible = true;
                cout << n / i << endl;
            }
            count++;
        }
    }
}