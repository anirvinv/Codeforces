#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int val;
            cin >> val;
            if (val == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(2 - x) + abs(2 - y) << endl;
}
