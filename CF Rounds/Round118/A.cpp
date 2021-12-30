#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x1, p1;
        cin >> x1 >> p1;
        int x2, p2;
        cin >> x2 >> p2;
        int x1r = x1;
        int x2r = x2;

        int x1nonzero = 0;
        int x2nonzero = 0;

        while (x1r != 0)
        {
            x1nonzero++;
            x1r /= 10;
        }
        while (x2r != 0)
        {
            x2nonzero++;
            x2r /= 10;
        }
        int x1d = 0;
        int x2d = 0;
        x1d += x1nonzero;
        x2d += x2nonzero;
        x1d += p1;
        x2d += p2;

        if (x1d > x2d)
        {
            cout << ">" << endl;
        }
        else if (x1d < x2d)
        {
            cout << "<" << endl;
        }
        else
        {
            if (x1nonzero > x2nonzero)
            {
                fo(i, x1nonzero - x2nonzero)
                {
                    x2 *= 10;
                }
                if (x1 > x2)
                {
                    cout << ">" << endl;
                }
                else if (x1 == x2)
                {
                    cout << "=" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (x1nonzero == x2nonzero)
            {
                if (x1 > x2)
                {
                    cout << ">" << endl;
                }
                else if (x1 == x2)
                {
                    cout << "=" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                fo(i, x2nonzero - x1nonzero)
                {
                    x1 *= 10;
                }
                if (x1 > x2)
                {
                    cout << ">" << endl;
                }
                else if (x1 == x2)
                {
                    cout << "=" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
        }
    }
}