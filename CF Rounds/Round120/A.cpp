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
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;

        int smallest = min(min(l1, l2), l3);
        int largest = max(max(l1, l2), l3);
        int middle = l1 + l2 + l3 - smallest - largest;

        if ((smallest + middle) == largest)
        {
            cout << "YES" << '\n';
        }
        else
        {
            if ((smallest == middle) && (largest % 2 == 0))
            {
                cout << "YES" << '\n';
            }
            else if ((middle == largest) && (smallest % 2 == 0))
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}