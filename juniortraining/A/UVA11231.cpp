#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, c;

    while (true)
    {
        cin >> n >> m >> c;
        if (n == 0 && m == 0 && c == 0)
        {
            break;
        }
        else
        {
            if (c == 0)
            {
                int part2 = (m - 7 + 1) / 2;
                int part1 = m - 7 - part2;

                if (part1 == part2)
                {
                    cout << ((m - 7) / 2) * (n - 7) << endl;
                }
                else
                {
                    int largeRow = ((n - 7 + 1) / 2);
                    int smallRow = (n - 7) - largeRow;
                    cout << (part1 * largeRow + part2 * smallRow) << endl;
                }
            }
            else
            {
                int part1 = (m - 7 + 1) / 2;
                int part2 = m - 7 - part1;

                if (part1 == part2)
                {
                    cout << ((m - 7) / 2) * (n - 7) << endl;
                }
                else
                {
                    int largeRow = ((n - 7 + 1) / 2);
                    int smallRow = (n - 7) - largeRow;
                    cout << (part1 * largeRow + part2 * smallRow) << endl;
                }
            }
        }
    }
}