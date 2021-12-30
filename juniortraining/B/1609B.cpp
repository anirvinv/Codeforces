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
int check(string s, int l, int r)
{
    int count = 0;
    if (s.length() >= 3)
    {
        for (int i = l; i <= r; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
            {
                i += 2;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int total = check(s, 0, s.length() - 1);
    while (q--)
    {
        int pos;
        char c;
        cin >> pos;
        pos--;
        cin >> c;
        int count = 0;
        if (s.length() >= 3)
        {

            count = check(s, max(0, pos - 2), min(pos + 2, n - 1));
            s[pos] = c;
            count -= check(s, max(0, pos - 2), min(pos + 2, n - 1));
            count *= -1;
            total += count;
            cout << total << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}