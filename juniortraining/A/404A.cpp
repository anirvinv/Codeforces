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

    int n;
    cin >> n;
    char arr[n][n];
    unordered_map<char, int> alphs;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            arr[i][j] = s[j];
            alphs[s[j]]++;
        }
    }
    char diag = arr[0][0];
    alphs[diag] = 0;
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] != diag)
        {
            x = false;
            break;
        }
        alphs[diag]++;
    }
    if (!x)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            if (arr[i][n - i - 1] != diag)
            {
                x = false;
                break;
            }
            alphs[diag]++;
        }
        alphs[diag]--;
        if (!x)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (alphs.size() != 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                auto iter = alphs.begin();
                while (iter->first == diag)
                {
                    iter++;
                }
                if (iter->second != ((n * n) - alphs[diag]))
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
}