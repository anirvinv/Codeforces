#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        if ((s[s.length() - 1] - '0') % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if ((s[0] - '0') % 2 == 0)
            {
                cout << "1" << endl;
            }
            else
            {
                bool exists = false;
                for (int i = 0; i < s.length(); i++)
                {
                    if ((s[i] - '0') % 2 == 0)
                    {
                        exists = true;
                        break;
                    }
                }
                if (exists)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
}
