#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, h;
    cin >> n >> h;

    int total = n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val > h)
        {
            total++;
        }
    }
    cout << total << endl;
}
