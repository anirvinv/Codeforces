#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 9; i++)
    {
        if ((k * i) % 10 == r || (i * k) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
    }
}