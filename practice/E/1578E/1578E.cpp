#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, p;
        cin >> h >> p;

        // ll totalNodes = (ll)pow(2, h) - 1;
        ll totalNodes = (ll)1 << h;
        totalNodes--;
        ll currentNodes = 1;
        ll moments = 0;
        ll traversed = 0;
        while (p >= currentNodes)
        {
            moments++;
            traversed += currentNodes;
            currentNodes = currentNodes << 1;
        }
        ll remaining = totalNodes - traversed;
        cout << (remaining + p - 1) / p + moments << endl;
    }
}