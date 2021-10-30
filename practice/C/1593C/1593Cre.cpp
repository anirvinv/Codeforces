#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        ll n, k;
        cin >> n >> k;
        map<int, int> cnt;

        for (int j = 0; j < k; j++)
        {
            int value;
            cin >> value;
            cnt[value] += 1;
        }
        int catPtr = 0;
        int hole = n;
        ll saved = 0;

        for (auto pos = cnt.rbegin(); pos != cnt.rend(); pos++)
        {
            int lastIndex = pos->first;
            int lastMice = pos->second;
            int maxCatMoves = lastIndex - catPtr;

            if (catPtr < lastIndex)
            {
                int maxSaved = ceil((double)maxCatMoves / (n - lastIndex));
                if (lastMice < maxSaved)
                {
                    saved += lastMice;
                    catPtr += lastMice * (n - lastIndex);
                }
                else
                {
                    saved += maxSaved;
                    catPtr += maxSaved * (n - lastIndex);
                }
            }
            else
            {
                break;
            }
        }
        cout << saved << endl;
    }
}