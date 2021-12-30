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
        string s;
        cin >> s;
        char mi = s[0];
        int index = 0;
        fo(i, s.length())
        {
            if ((int)s[i] < (int)mi)
            {
                mi = s[i];
                index = i;
            }
        }

        cout << mi << " ";
        fo(i, s.length())
        {
            if (i != index)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}