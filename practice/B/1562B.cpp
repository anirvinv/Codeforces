#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

bool isPrime(int k)
{
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string n;
        cin >> n;
        bool found = false;
        int val = n[0] - '0';
        for (int i = 0; i < n.length(); i++)
        {
            val = n[i] - '0';
            if (val == 2)
            {
            }
            else if ((!isPrime(val)) || val == 1)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << 1 << '\n';
            cout << val << '\n';
        }
        else
        {
            int foundVal = 0;
            for (int i = 0; i < n.length(); i++)
            {
                int tensVal = n[i] - '0';
                for (int j = i + 1; j < n.length(); j++)
                {
                    int onesVal = n[j] - '0';
                    if (!isPrime(10 * tensVal + onesVal))
                    {
                        foundVal = 10 * tensVal + onesVal;
                        break;
                    }
                }
            }

            cout << 2 << endl;
            cout << foundVal << endl;
        }
    }
}