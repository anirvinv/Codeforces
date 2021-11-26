#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int cupcakes = 0;
    int time = 0;
    bool built = false;
    while (cupcakes < n)
    {
        if (time > d)
        {
            built = true;
            break;
        }
        time += t;
        cupcakes += k;
    }
    if (built)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}