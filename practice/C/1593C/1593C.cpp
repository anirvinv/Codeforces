#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, k;
        cin >> n >> k;

        ll coordLine[n + 1];
        for (int j = 0; j < n + 1; j++)
        {
            coordLine[j] = 0;
        }

        for (int j = 0; j < k; j++)
        {
            ll coord;
            cin >> coord;
            coordLine[coord]++;
        }

        ll ptrCat = 0;
        ll miceSaved = 0;
        while (ptrCat < n)
        {
            ll lastMouseIndex = -1;
            for (ll j = n; j > ptrCat; j--) // iterate up to the hole to find the mouse closest to hole
            {
                if (coordLine[j] != 0)
                {
                    lastMouseIndex = j;
                    break;
                }
            }
            if (lastMouseIndex == -1)
            {
                break;
            }
            else if (lastMouseIndex == n - 1) // if last mouse is one before the hole, then it moves and saves itself
            {
                coordLine[lastMouseIndex]--;
                miceSaved++;
            }
            else
            {
                coordLine[lastMouseIndex]--;
                coordLine[lastMouseIndex + 1]++;
            }
            ptrCat++;
            coordLine[ptrCat] = 0; // rip all mice there
        }
        cout << miceSaved << endl;
    }
}