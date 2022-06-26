#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        int mono[n];
        int poly[m];

        fo(i, n) { cin >> mono[i]; }
        fo(i, m) { cin >> poly[i]; }
        int ptr1 = 0;
        int ptr2 = 0;
        vector<int> sequence;
        bool impossible = false;
        while (ptr1 < n)
        {
            if (mono[ptr1] == 0)
            {
                k++;
                sequence.push_back(0);
            }
            else if (mono[ptr1] <= k)
            {
                sequence.push_back(mono[ptr1]);
            }
            else
            {

                while (k < mono[ptr1] && ptr2 < m)
                {
                    if (poly[ptr2] == 0)
                    {
                        k++;
                        sequence.push_back(0);
                    }
                    else if (poly[ptr2] <= k)
                    {
                        sequence.push_back(poly[ptr2]);
                    }
                    else if (poly[ptr2] > k)
                    {
                        impossible = true;
                        break;
                    }
                    ptr2++;
                }
                if (impossible || mono[ptr1] > k)
                {
                    impossible = true;
                    break;
                }
                else
                {
                    sequence.push_back(mono[ptr1]);
                }
            }
            ptr1++;
        }

        while (!impossible && ptr2 < m)
        {

            if (poly[ptr2] == 0)
            {
                k++;
                sequence.push_back(0);
            }
            else if (poly[ptr2] <= k)
            {
                sequence.push_back(poly[ptr2]);
            }
            else
            {
                impossible = true;
                break;
            }
            ptr2++;
        }

        if (impossible)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int u : sequence)
            {
                cout << u << " ";
            }
            cout << '\n';
        }
    }
}